#include "12864.h"
#include "delay.h"
#include "read_data.h"

unsigned char i = 0; //用于循环
unsigned char show_data[11]; 
unsigned char state = 0; // 状态函数
int begin_index = 1; // 单词背诵的起点索引
int word_number = 0; // 所有单词的数目
sbit P31 = P3^1;  // ctrl
int recite_ans_record = 0; // 用位记录背诵情况
unsigned char total_number = 0; // 一次背诵中，总的单词数 以及串口发送过程中的下标计数
bit is_receiving = 0;
unsigned char receivedData = 0;
unsigned char word_lenth_counter = 0;

// 定义波特率，这里使用9600波特率，晶振频率为11.0592MHz
#define BAUD_RATE 9600
#define FOSC 11059200L
#define TIMER1_RELOAD (65536 - (FOSC / 12 / 16 / BAUD_RATE))

// 定义配对请求码和允许配对响应码，可自行定义合适的值，这里简单示例
#define PAIR_REQUEST_CODE 0xAE // （发送方的） 配对请求信号
#define WORD_SENDING_FINISH 0xA1
#define FIGHT_END 0xAB // （发送方的）对战结束信号

#define PAIR_ALLOW_CODE 0xAD // （接收方的） 配对允许信号
#define CALLBACK 0xAC // （接收方）回声信号
#define RECITE_FINISH_right 0xAA  // （接收方的）背诵完成信号,会
#define RECITE_FINISH_wrong 0xAD  // （接收方的）背诵完成信号，不会


// 定义最大重发次数
#define MAX_RESEND_TIMES 3

// 定义定时中断次数计数变量
unsigned int count = 0;

////////////////////////////////////////////////////////////////////////////////////////////////

// 按位修改int
void set_bit(int bit_index, int value) {
    int mask = 1 << bit_index;  // 掩码，将1左移到对应的位位置
    if (value == 0) {
        recite_ans_record &= ~mask;  // 设置为0，使用按位与和取反后的掩码操作
    } else {
        recite_ans_record |= mask;  // 1，使用按位或操作
    }
}

void set_bit_for_fight(int bit_index,unsigned char value){
	int mask = 1 << bit_index*2; // 掩码，将1左移到对应的位位置
	if(value==0){
		// 不会
		recite_ans_record &= ~mask;
	}else if(value == 1){
		// 都会，但是对方比自己快
		recite_ans_record |= mask;
	}else if(value == 2){
		// 都会，自己比对方快
		recite_ans_record &= ~mask;
	}else if(value == 3){
		// 只有自己会
		recite_ans_record |= mask;
	}
	mask = mask << 1; // 继续左移
	if(value==0){
		// 不会
		recite_ans_record &= ~mask;
	}else if(value == 1){
		// 都会，但是对方比自己快
		recite_ans_record &= ~mask;
	}else if(value == 2){
		// 都会，自己比对方快
		recite_ans_record |= mask;
	}else if(value == 3){
		// 只有自己会
		recite_ans_record |= mask;
	}
}

// 读取int的指定bit位
int get_bit(int bit_index) {
    int mask = 1 << bit_index;  // 创建一个掩码，将1左移到对应的位位置
    return (recite_ans_record & mask) >> bit_index;  // 使用按位与操作获取指定位的值，然后右移到最低位输出
}

int get_bit_for_fighting(unsigned char bit_index){
		int mask = 1 << bit_index*2;  // 创建一个掩码，将1左移到对应的位位置
		if((recite_ans_record & mask) >> bit_index){
			mask =  mask << 1; // 继续左移
			if((recite_ans_record & mask) >> bit_index){
				 // 4
				return 40;
			}else{
				// 3
				return 30;
			}
		}else{
			mask =  mask << 1; // 继续左移
			if((recite_ans_record & mask) >> bit_index){
				//2
				return 20;
			}else{
				//1
				return 10;
			}
		}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void cant_connect(){
	//显示配对失败
	state = 23;
	Clear();
	Display_HZ( 2, 3, 16, 46); 
	Display_HZ( 2, 3, 32, 43); // 显示配对失败
	Display_HZ( 2, 3, 48, 18);
	Display_HZ( 1, 3, 0, 44);
	Display_HZ( 1, 3, 16,45);	
	Display_HZ( 1, 3, 32, 46); 
	Display_HZ(2,6,0,33);
}

void fighting_show(unsigned char* show_data_,unsigned char page){
	Clear();

	display_str(show_data_,page);

	// 显示按钮
	Display_HZ( 2, 6, 0, 14);

	Display_HZ( 1, 6, 48, 28);

	// 显示目前的成绩
	for(i=0;i<total_number-1;i++){
		if(i == 9){
			if(get_bit_for_fighting(i) == 10 || get_bit_for_fighting(i) == 20){
				// 对了
				Display_HZ(1,0,48,4);
			}else{
				// 错了
				Display_HZ(1,0,48,50);
			}
		}else if(i == 8){
			if(get_bit_for_fighting(i) == 10 || get_bit_for_fighting(i) == 20){
				// 对了
				Display_HZ(2,0,0,4);
			}else{
				// 错了
				Display_HZ(2,0,0,50);
			}
		}else if(i>=4){
			if(get_bit_for_fighting(i) == 10 || get_bit_for_fighting(i) == 20){
				// 对了
				Display_HZ(1,4,i*16,4);
			}else{
				// 错了
				Display_HZ(1,4,i*16,50);
			}
			
		}else{
			if(get_bit_for_fighting(i) == 10 || get_bit_for_fighting(i) == 20){
				// 对了
				Display_HZ(2,4,i*16,4);
			}else{
				// 错了
				Display_HZ(2,4,i*16,50);
			}
		}
	}
}

// 定时器T0初始化函数
void Timer0_Init()
{
    TMOD &= 0xF0;  // 先清除T0的控制位，保持T1的设置不变
    TMOD |= 0x01;  // 设置定时器T0为方式1（16位定时器）
    TH0 = 0xFC;    // 装入初值，定时1ms（高8位），根据晶振频率计算得出，具体计算过程可参考定时器初值计算方法
    TL0 = 0x18;    // 装入初值，定时1ms（低8位）
    ET0 = 1;       // 允许T0中断
    EA = 1;        // 开总中断
    TR0 = 1;       // 启动定时器T0
}

void Uart_Init()
{
    TMOD = 0x20;  // 设置定时器1工作模式为模式2（自动重装初值）
    TH1 = 0xFD;   // 波特率9600（晶振11.0592MHz时），设置定时器初值
    TL1 = 0xFD;
    TR1 = 1;      // 启动定时器1

    SCON = 0x50;  // 串口工作方式1，允许接收
    ES = 1;       // 允许串口中断
    EA = 1;       // 开总中断
}

// 函数用于关闭外部中断4
void close_interrupt4(void)
{
    IE &= 0xBF;  
}


void sendByte(unsigned char dat)
{
    SBUF = dat;  // 将数据写入发送缓冲寄存器，启动发送
    while (!TI); // 等待发送完成，TI为发送中断标志位，发送完成后由硬件置1
    TI = 0;      // 为下一次发送做准备
}


// 发送单词的函数
void send_word(unsigned char* arr)
{		
		int retry_count = 0;
    for (i = 0; i < 11; i++) {
				if (arr[i] == 255) {
					  // 发送单词传输完成信号
						i = 0;
						sendByte(WORD_SENDING_FINISH);
            break;
        }
        sendByte(arr[i]);
				DelayMs(100);
    }
		DelayMs(100);
    while (retry_count < MAX_RESEND_TIMES) {
        if (RI) {
            RI = 0;
						sendByte(SBUF);
            if (SBUF == CALLBACK) {  
                break;
            }
        }
        // 等待
        DelayMs(500);
        retry_count++;
    }
		if(retry_count < MAX_RESEND_TIMES){
			// 传输成功
			begin_index++;
			total_number++;
			if(begin_index>=word_number || total_number > 8){
				//  到头了，这一次对战结束了
				sendByte(FIGHT_END);
				begin_index = 1;
				total_number = 0;
				// 开始对战结果的呈现
				// 计算个人得分：
				word_number = 0;
				for(i = 0;i<=7;i++){
					word_number+=get_bit_for_fighting(i);
				}
				word_number /= 10;
				begin_index = 0;
				Clear();
				Display_HZ( 2, 0, 32, 55);
				Display_HZ( 2, 0, 48,56);
				Display_HZ( 1, 0, 0, 57);
				Display_HZ( 1, 0, 16, 58);
				display_number(word_number,2);
				Display_HZ( 2, 6, 0,33);  // home
				state = 40;
				
			}
			// 显示单词
			if(begin_index) fighting_show(show_data,2);
			// 接下来就等着答题了
			if(begin_index) state = 26;
		}else{
			// 传输失败
			cant_connect();
		}
}

void pairing(){
		int successful = 0;
		
		Display_HZ( 2, 3, 32, 41); // 显示开始请求
		Display_HZ( 2, 3, 48, 42);
		Display_HZ( 1, 3, 0, 48);
		Display_HZ( 1, 3, 16,49);
		sendByte(PAIR_REQUEST_CODE);
		DelayMs(500); // 等待0.3秒
    

    for(i=3;i>0;i--)
    {
        if (RI)
        {
            if (SBUF == PAIR_ALLOW_CODE){
								// 收到允许配对响应
                RI = 0;
                successful = 1;
                break;
            }
            else{
								// 没有接收到允许配对响应
                RI = 0;
								DelayMs(300);
            }
						RI = 0;
        }
				DelayMs(300);
    }
		if(successful){
			// 开始对战
			Display_HZ( 2, 3, 16, 47); 
			Display_HZ( 2, 3, 32, 41); // 显示开始对战
			Display_HZ( 2, 3, 48, 42);
			Display_HZ( 1, 3, 0, 18);
			Display_HZ( 1, 3, 16,19);	
			Display_HZ( 1, 3, 32, 47);
			// 下面要选择单词
			state = 22;
			begin_index = 1;
			Clear();
			Display_HZ( 2, 0, 0, 20);
			Display_HZ( 2, 0, 16, 21);
			Display_HZ( 2, 0, 32, 22);
			Display_HZ( 2, 0, 48, 23);
			display_number(begin_index,3);
			Display_HZ( 2, 6, 0, 14);
			Display_HZ( 1, 6, 48, 15);
			Display_HZ(1,6,32,36);
		}else{
			cant_connect();
		}
}

// 接收数组数据（启动接收过程）
void ReceiveArray(int command) {
		if(command){
    is_receiving = 1;
		}else{
			is_receiving = 0;
		}
}

// 接收端串口中断服务函数
void UartIsr() interrupt 4 {
    if (RI) {
        RI = 0;
				receivedData = SBUF;
        if(receivedData == PAIR_REQUEST_CODE){
					//display_number(10,0);
					// 允许配对
					if(state == 0 || state == -1 ){
						ReceiveArray(1);
						sendByte(PAIR_ALLOW_CODE);  // 允许配对
						// 开始对战
						recite_ans_record = 0;
						total_number = 0;
						for(i = 0;i<11;i++){
							show_data[i] = 255;
						}
						state = 25;
						Clear();
						Display_HZ( 2, 3, 16, 47); 
						Display_HZ( 2, 3, 32, 41); // 显示开始对战
						Display_HZ( 2, 3, 48, 42);
						Display_HZ( 1, 3, 0, 18);
						Display_HZ( 1, 3, 16,19);	
						Display_HZ( 1, 3, 32, 47);
					}
				}else if(receivedData == RECITE_FINISH_right){
					if(state == 26){
						
						state = 28;
						//display_number(28,0);
					}else if(state == 27){
						state = 29;
						//display_number(29,0);
					}else if(state == 32){
						//发送方会，对方情况刚得知:会
						set_bit_for_fight(total_number,2);
						// 开始下个单词
						state = 24;
						ReceiveArray(0); 
						get_word_info(begin_index, show_data);
						send_word(show_data);
					}else if(state == 34){
						 //接收方会，对方情况刚得知:会
						set_bit_for_fight(total_number,2);
						state = 25;
						ReceiveArray(1); // 等待新的单词的到来
					}else if(state == 33){
						state = 24;
						ReceiveArray(0); 
						get_word_info(begin_index, show_data);
						send_word(show_data);
					}else{
						if(get_bit_for_fighting(total_number) != 10){
							set_bit_for_fight(total_number,2);
						}
					}
					Uart_Init();
				}else if(receivedData == RECITE_FINISH_wrong){
					if(state == 26){
						state = 30;
						//display_number(30,0);
					}else if(state == 27){
						state = 31;
						//display_number(31,0);
					}else if(state == 32){
						//发送方会，对方情况刚得知:不会
						set_bit_for_fight(total_number,3);
						// 开始下个单词
						state = 24;
						ReceiveArray(0); 
						get_word_info(begin_index, show_data);
						send_word(show_data);
					}else if(state == 34){
						 //接收方会，对方情况刚得知:不会
						set_bit_for_fight(total_number,3);
						state = 25;
						ReceiveArray(1); // 等待新的单词的到来
					}else if(state == 33){
						state = 24;
						ReceiveArray(0); 
						get_word_info(begin_index, show_data);
						send_word(show_data);
					}else{
						if(get_bit_for_fighting(total_number) != 10){
							set_bit_for_fight(total_number,2);
						}
					}
					Uart_Init();
				}else if(receivedData ==  FIGHT_END){
					
					Clear();
					word_number = 0;
					for(i = 0;i<=7;i++){
						word_number+=get_bit_for_fighting(i);
					}
					word_number /= 10;
					begin_index = 0;
					state = 40;
					Clear();
					Display_HZ( 2, 0, 32, 55);
					Display_HZ( 2, 0, 48,56);
					Display_HZ( 1, 0, 0, 57);
					Display_HZ( 1, 0, 16, 58);
					display_number(word_number,2);
					Display_HZ( 2, 6, 0,33);  // home
					
					
				}else if(is_receiving && state == 25){
						//display_number(is_receiving,0);
						if(receivedData == WORD_SENDING_FINISH ||word_lenth_counter>=9 ){
							//display_number(77,0);
							// 这个单词已经传输完了
							is_receiving = 0;
							sendByte(CALLBACK);
							word_lenth_counter = 0;
							// 展示单词t
							total_number+=1; //前面加多了，这是补偿，但是到后面也有可能出乱子
							fighting_show(show_data,2);
							/*
							display_number(total_number,0);
							DelayMs(1000);
							for(i=0;i<total_number-1;i++){
								display_number(show_data[i],2);
								DelayMs(1000);
							}*/
							// 进入答题状态
							state = 27;
							//display_number(1111,0);
						}else{
							//display_number(22,0);
							receivedData-=0x80;
							show_data[word_lenth_counter] = receivedData-128;
							// display_number(receivedData-128,2);
							word_lenth_counter++;
						}
				}
				
    }
}

///////////////////////////////////////////////////////////

void select_function_interface(int selection){
	Clear();
	Display_HZ( 2, 0, 0, 9);
	Display_HZ( 2, 0, 16, 10);
	Display_HZ( 2, 0, 32, 11);
	Display_HZ( 2, 0, 48, 12);
	if(!selection){
		// 背单词
		Display_HZ( 2, 3, 32, 13);
		Display_HZ( 2, 3, 48, 6);
		Display_HZ( 1, 3, 0, 7);
		Display_HZ( 1, 3, 16, 8);
	}else{
		// 对战
		Display_HZ( 2, 3, 32, 16);
		Display_HZ( 2, 3, 48, 18);
		Display_HZ( 1, 3, 0, 19);
		Display_HZ( 1, 3, 16,17);
	}
	Display_HZ( 2, 6, 0, 14);
	Display_HZ( 1, 6, 48, 15);
}

void word_begin_selection(int command){
	if(command == 0){
		// -
		if(begin_index-10<=0){
			begin_index = (word_number/10)*10+1;
		}else{
			begin_index-=10;
		}
	}else{
		// +
		begin_index+=10;
		if(begin_index>=word_number){
			begin_index=1;
		}
	}
	Clear();
	Display_HZ( 2, 0, 0, 20);
	Display_HZ( 2, 0, 16, 21);
	Display_HZ( 2, 0, 32, 22);
	Display_HZ( 2, 0, 48, 23);
	display_number(begin_index,3);
	Display_HZ( 2, 6, 0, 14);
	Display_HZ( 1, 6, 48, 15);
	Display_HZ(1,6,32,36);
}

void show_recode(){
	for(i=0;i<total_number;i++){
		if(i == 9){
			if(get_bit(i)){
				// 对了
				Display_HZ(1,0,48,26);
			}else{
				// 错了
				Display_HZ(1,0,48,27);
			}
		}else if(i == 8){
			if(get_bit(i)){
				// 对了
				Display_HZ(2,0,0,26);
			}else{
				// 错了
				Display_HZ(2,0,0,27);
			}
		}else if(i>=4){
			if(get_bit(i)){
				// 对了
				Display_HZ(1,4,i*16,24);
			}else{
				// 错了
				Display_HZ(1,4,i*16,25);
			}
			
		}else{
			if(get_bit(i)){
				// 对了
				Display_HZ(2,4,i*16,24);
			}else{
				// 错了
				Display_HZ(2,4,i*16,25);
			}
		}
	}
}

void recite_words_showing(int show_ans){
	Clear();
	if(show_ans == 1){
		show_recode();
	}
	get_word_info(begin_index,show_data);
	display_str(show_data,2);
	Display_HZ(2,6,0,14);
	Display_HZ(1,6,48,28);
	Display_HZ(1,6,32,36);
}

void recite_res_showing(){
	int counter = 0;
	Clear();
	show_recode();
	Display_HZ( 2, 0, 32, 32);
	Display_HZ( 2, 0, 48, 29);
	Display_HZ( 1, 0, 0, 30);
	Display_HZ( 1, 0, 16, 31);
	for(i=0;i<total_number-1;i++){
		if(get_bit(i)){
			counter+=1;
		}
	}
	if(counter == 10){
		Display_HZ( 2, 2, 48, 34);
		Display_HZ( 1, 2, 0, 35);
	}else{
		display_number(counter,2);
	}
	Display_HZ( 2, 6, 0, 33);
	Display_HZ( 1, 6, 48, 15);
}

// 外部中断0的中断服务函数
void int0_service() interrupt 0
{
	if(state == 0){
		// 背单词
		// 进行单词选择
		// 关闭外部中断4
    close_interrupt4();
		state = 10;
		ReceiveArray(0);
		Clear();
		Display_HZ( 2, 0, 0, 20);
		Display_HZ( 2, 0, 16, 21);
		Display_HZ( 2, 0, 32, 22);
		Display_HZ( 2, 0, 48, 23);
		display_number(begin_index,3);
		Display_HZ( 2, 6, 0, 14);
		Display_HZ( 1, 6, 48, 15);
		Display_HZ(1,6,32,36);
		
	}else if(state == -1){
		// 对战
		state = 20; // 配对状态
		ReceiveArray(0);
		Uart_Init();
		Clear();
		recite_ans_record = 0; // 清空记录
		Display_HZ( 2, 3, 32, 37);
		Display_HZ( 2, 3, 48, 38);
		Display_HZ( 1, 3, 0, 39);
		Display_HZ( 1, 3, 16,40);
		Display_HZ( 2, 6, 0, 33);
		Display_HZ( 1, 6, 48, 15);
	}else if(state == 10){
		// 背诵起始点确定,进入背诵环节
		close_interrupt4();
		state = 11;
		recite_words_showing(0);
		begin_index++;
		total_number++;
	}else if(state == 11){
		if(P31 == 0){
			// 会
			
			if(begin_index<word_number && total_number<=10){
				set_bit(total_number-1,1);
				// 还没有背完，继续下一个
				recite_words_showing(1);
				begin_index++;
				total_number++;
				
			}else{
				// 进入背诵展示阶段
				state = 12;
				recite_res_showing();
			}
			// 如果按下ctrl， 那就没有任何响应
		}
		
	}else if(state == 12 || state == 20 || state == 23 || state == 40){
		// 回到主界面
		state = 0;
		ReceiveArray(1);
		begin_index = 1;
		total_number = 0;
		recite_ans_record = 0;
		word_number = get_word_count();
		Uart_Init();
		select_function_interface(0);
	}else if(state == 22){
		// 单词起始点已经选好了，开始正式对战
		state = 24;
		total_number = 0;  // 初始化计数
		recite_ans_record = 0;
		// 发送第一个单词
		get_word_info(begin_index,show_data);
		send_word();
	}else if(state == 26){
		// 发送方会, 而且接收方还没有发送
		sendByte(RECITE_FINISH_right); //发送会的信号
		// 发送完之后需要等待对方的汇报
		set_bit_for_fight(total_number,3); // 先登记上
		state = 32;
		//display_number(32,0);
		
	}else if(state == 27){
		// 接收方会 ， 发送方还没有发送
		sendByte(RECITE_FINISH_right); //发送会的信号
		//ReceiveArray(1);  // 改的这里
		state = 34;
		set_bit_for_fight(total_number,3); // 先登记上
		//display_number(34,0);
		
	}else if(state == 28){
		// 发送方会, 接收方事先会
		set_bit_for_fight(total_number,1); 
		if(state % 2 == 0){
			// 是发送方,该切换下一个单词了
			sendByte(RECITE_FINISH_right);
			DelayMs(300); 
			state = 24;
			ReceiveArray(0); 
			get_word_info(begin_index, show_data);
			send_word(show_data);
		}else{
			state = 25;
			sendByte(RECITE_FINISH_right); //发送会的信号
			ReceiveArray(1); 
		}
		
	}else if(state == 29){
		// 接收方会，发送方事先会
		set_bit_for_fight(total_number,1); 
		if(state % 2 == 0){
			// 是发送方,该切换下一个单词了
			sendByte(RECITE_FINISH_right);
			DelayMs(300); 
			state = 24;
			ReceiveArray(0); 
			get_word_info(begin_index, show_data);
			send_word(show_data);
		}else{
			state = 25;
			sendByte(RECITE_FINISH_right); //发送会的信号
			ReceiveArray(1); 
		}
		
	}else if(state == 30){
		// 发送方会, 接收方不会
		set_bit_for_fight(total_number,3); 
		if(state % 2 == 0){
			// 是发送方,该切换下一个单词了
			DelayMs(300); 
			state = 24;
			ReceiveArray(0); 
			get_word_info(begin_index, show_data);
			send_word(show_data);
		}else{
			state = 25;
			sendByte(RECITE_FINISH_right); //发送会的信号
			ReceiveArray(1); 
		}
	}else if(state == 31){
		// 接收方会，发送方不会
		set_bit_for_fight(total_number,3); 
		if(state % 2 == 0){
			// 是发送方,该切换下一个单词了
			sendByte(RECITE_FINISH_right);
			DelayMs(300); 
			state = 24;
			ReceiveArray(0); 
			get_word_info(begin_index, show_data);
			send_word(show_data);
		}else{
			state = 25;
			sendByte(RECITE_FINISH_right); //发送会的信号
			ReceiveArray(1); 
		}
		
	}
	
}

// 定时器T0中断服务函数
void Timer0_ISR() interrupt 1
{
    TH0 = 0xFC;    // 重新装入初值，定时1ms（高8位）
    TL0 = 0x18;    // 重新装入初值，定时1ms（低8位）
    count++;       // 每进入一次中断，计数变量加1
}

// 外部中断1的中断服务函数
void int1_service() interrupt 2
{
	if(state == 0 || state == -1){
		// 模式选择
		if(state == -1){
			// 背单词
			Display_HZ( 2, 3, 32, 13);
			Display_HZ( 2, 3, 48, 6);
			Display_HZ( 1, 3, 0, 7);
			Display_HZ( 1, 3, 16, 8);
			state = 0;
			close_interrupt4();
		}else if(state == 0){
			// 对战
			Display_HZ( 2, 3, 32, 16);
			Display_HZ( 2, 3, 48, 18);
			Display_HZ( 1, 3, 0, 19);
			Display_HZ( 1, 3, 16,17);
			state = -1;
			Uart_Init();
		}
	}else if(state == 10 || state == 22){
		// 背诵起始点选择
		if(P31==0){word_begin_selection(1);}
		else{word_begin_selection(0);}
	}else if(state == 11){
			if(P31 == 0){
				// 不会
				set_bit(total_number-1,0);
				if(begin_index<word_number && total_number<=10){
					// 还没有背完，继续下一个
					recite_words_showing(1);
					begin_index++;
					total_number++;
					
				}else{
					// 进入背诵展示阶段
					state = 12;
					recite_res_showing();
				}
			}else if(P31 == 1){
				// 按下了ctrl，应该进行回滚
				if(total_number-1 > 0){
					begin_index--;
					total_number--;
					recite_words_showing(1);
				}
			}
		
	}else if(state == 12){
		// 开始下一轮背诵
		begin_index -= 1;
		total_number = 0;
		recite_ans_record = 0;
		state = 10;
		Clear();
		Display_HZ( 2, 0, 0, 20);
		Display_HZ( 2, 0, 16, 21);
		Display_HZ( 2, 0, 32, 22);
		Display_HZ( 2, 0, 48, 23);
		display_number(begin_index,3);
		Display_HZ( 2, 6, 0, 14);
		Display_HZ( 1, 6, 48, 15);
	}else if(state == 20){
		// 现在连线好了，要开始配对了
		Display_HZ( 2, 3, 32, 41); // 显示开始配对
		Display_HZ( 2, 3, 48, 42);
		Display_HZ( 1, 3, 0, 43);
		Display_HZ( 1, 3, 16,18);
		state = 21;
		pairing();
	}else if(state == 26){
		// 发送方不会, 而且接收方还没有发送
		sendByte(RECITE_FINISH_wrong); //发送不会的信号
		// 发送完之后需要等待对方的汇报
		set_bit_for_fight(total_number,0); // 先登记上,反正已经放弃了
		state = 33; // 发送方不会，对方不知道
	}else if(state == 27){
		// 老老实实等发送方的单词信息
		sendByte(RECITE_FINISH_wrong); //发送不会的信号
		set_bit_for_fight(total_number,0);
		state = 25;
		ReceiveArray(1); // 等待新的单词的到来
		
	}else if(state>=28 && state <= 31){
		// 接收方不会 ， 发送方已经做完了
		sendByte(RECITE_FINISH_wrong); //发送不会的信号
		set_bit_for_fight(total_number,0); // 先登记上,这个单词已经放弃了
		if(state % 2 == 0){
			// 是发送方,该切换下一个单词了
			state = 24;
			get_word_info(begin_index, show_data);
			send_word(show_data);
		}else{
			state = 25;
		}
	}

}

void main(){
		// 外部中断0初始化，设置为下降沿触发
    IT0 = 1;
    EX0 = 1;
    // 外部中断1初始化，设置为下降沿触发
    IT1 = 1;
    EX1 = 1;
    // 打开总中断允许位
    EA = 1;
		// 初始化显示数据
		for(i = 0;i<11;i++){
			show_data[i] = 255;
		}
		word_number = get_word_count();
		
		
		//下面开始进入主界面
		Clear();
		Display_HZ( 2, 3, 16, 4);
		Display_HZ( 2, 3, 32, 0);
		Display_HZ( 2, 3, 48, 1);
		Display_HZ( 1, 3, 0, 2);
		Display_HZ( 1, 3, 16, 3);
		Display_HZ( 1, 3, 32, 4);
		DelayMs(1000);
		//这里应该再加上初始化端口
		Timer0_Init();
		Uart_Init();
		// 下面进入主页面
		state = 0;
		select_function_interface(0);
		
		
	while(1){

	}
	
}