#include "12864.h"
#include "delay.h"
#include "read_data.h"

unsigned char i = 0; //����ѭ��
unsigned char show_data[11]; 
unsigned char state = 0; // ״̬����
int begin_index = 1; // ���ʱ��е��������
int word_number = 0; // ���е��ʵ���Ŀ
sbit P31 = P3^1;  // ctrl
int recite_ans_record = 0; // ��λ��¼�������
unsigned char total_number = 0; // һ�α����У��ܵĵ����� �Լ����ڷ��͹����е��±����
bit is_receiving = 0;
unsigned char receivedData = 0;
unsigned char word_lenth_counter = 0;

// ���岨���ʣ�����ʹ��9600�����ʣ�����Ƶ��Ϊ11.0592MHz
#define BAUD_RATE 9600
#define FOSC 11059200L
#define TIMER1_RELOAD (65536 - (FOSC / 12 / 16 / BAUD_RATE))

// �����������������������Ӧ�룬�����ж�����ʵ�ֵ�������ʾ��
#define PAIR_REQUEST_CODE 0xAE // �����ͷ��ģ� ��������ź�
#define WORD_SENDING_FINISH 0xA1
#define FIGHT_END 0xAB // �����ͷ��ģ���ս�����ź�

#define PAIR_ALLOW_CODE 0xAD // �����շ��ģ� ��������ź�
#define CALLBACK 0xAC // �����շ��������ź�
#define RECITE_FINISH_right 0xAA  // �����շ��ģ���������ź�,��
#define RECITE_FINISH_wrong 0xAD  // �����շ��ģ���������źţ�����


// ��������ط�����
#define MAX_RESEND_TIMES 3

// ���嶨ʱ�жϴ�����������
unsigned int count = 0;

////////////////////////////////////////////////////////////////////////////////////////////////

// ��λ�޸�int
void set_bit(int bit_index, int value) {
    int mask = 1 << bit_index;  // ���룬��1���Ƶ���Ӧ��λλ��
    if (value == 0) {
        recite_ans_record &= ~mask;  // ����Ϊ0��ʹ�ð�λ���ȡ������������
    } else {
        recite_ans_record |= mask;  // 1��ʹ�ð�λ�����
    }
}

void set_bit_for_fight(int bit_index,unsigned char value){
	int mask = 1 << bit_index*2; // ���룬��1���Ƶ���Ӧ��λλ��
	if(value==0){
		// ����
		recite_ans_record &= ~mask;
	}else if(value == 1){
		// ���ᣬ���ǶԷ����Լ���
		recite_ans_record |= mask;
	}else if(value == 2){
		// ���ᣬ�Լ��ȶԷ���
		recite_ans_record &= ~mask;
	}else if(value == 3){
		// ֻ���Լ���
		recite_ans_record |= mask;
	}
	mask = mask << 1; // ��������
	if(value==0){
		// ����
		recite_ans_record &= ~mask;
	}else if(value == 1){
		// ���ᣬ���ǶԷ����Լ���
		recite_ans_record &= ~mask;
	}else if(value == 2){
		// ���ᣬ�Լ��ȶԷ���
		recite_ans_record |= mask;
	}else if(value == 3){
		// ֻ���Լ���
		recite_ans_record |= mask;
	}
}

// ��ȡint��ָ��bitλ
int get_bit(int bit_index) {
    int mask = 1 << bit_index;  // ����һ�����룬��1���Ƶ���Ӧ��λλ��
    return (recite_ans_record & mask) >> bit_index;  // ʹ�ð�λ�������ȡָ��λ��ֵ��Ȼ�����Ƶ����λ���
}

int get_bit_for_fighting(unsigned char bit_index){
		int mask = 1 << bit_index*2;  // ����һ�����룬��1���Ƶ���Ӧ��λλ��
		if((recite_ans_record & mask) >> bit_index){
			mask =  mask << 1; // ��������
			if((recite_ans_record & mask) >> bit_index){
				 // 4
				return 40;
			}else{
				// 3
				return 30;
			}
		}else{
			mask =  mask << 1; // ��������
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
	//��ʾ���ʧ��
	state = 23;
	Clear();
	Display_HZ( 2, 3, 16, 46); 
	Display_HZ( 2, 3, 32, 43); // ��ʾ���ʧ��
	Display_HZ( 2, 3, 48, 18);
	Display_HZ( 1, 3, 0, 44);
	Display_HZ( 1, 3, 16,45);	
	Display_HZ( 1, 3, 32, 46); 
	Display_HZ(2,6,0,33);
}

void fighting_show(unsigned char* show_data_,unsigned char page){
	Clear();

	display_str(show_data_,page);

	// ��ʾ��ť
	Display_HZ( 2, 6, 0, 14);

	Display_HZ( 1, 6, 48, 28);

	// ��ʾĿǰ�ĳɼ�
	for(i=0;i<total_number-1;i++){
		if(i == 9){
			if(get_bit_for_fighting(i) == 10 || get_bit_for_fighting(i) == 20){
				// ����
				Display_HZ(1,0,48,4);
			}else{
				// ����
				Display_HZ(1,0,48,50);
			}
		}else if(i == 8){
			if(get_bit_for_fighting(i) == 10 || get_bit_for_fighting(i) == 20){
				// ����
				Display_HZ(2,0,0,4);
			}else{
				// ����
				Display_HZ(2,0,0,50);
			}
		}else if(i>=4){
			if(get_bit_for_fighting(i) == 10 || get_bit_for_fighting(i) == 20){
				// ����
				Display_HZ(1,4,i*16,4);
			}else{
				// ����
				Display_HZ(1,4,i*16,50);
			}
			
		}else{
			if(get_bit_for_fighting(i) == 10 || get_bit_for_fighting(i) == 20){
				// ����
				Display_HZ(2,4,i*16,4);
			}else{
				// ����
				Display_HZ(2,4,i*16,50);
			}
		}
	}
}

// ��ʱ��T0��ʼ������
void Timer0_Init()
{
    TMOD &= 0xF0;  // �����T0�Ŀ���λ������T1�����ò���
    TMOD |= 0x01;  // ���ö�ʱ��T0Ϊ��ʽ1��16λ��ʱ����
    TH0 = 0xFC;    // װ���ֵ����ʱ1ms����8λ�������ݾ���Ƶ�ʼ���ó������������̿ɲο���ʱ����ֵ���㷽��
    TL0 = 0x18;    // װ���ֵ����ʱ1ms����8λ��
    ET0 = 1;       // ����T0�ж�
    EA = 1;        // �����ж�
    TR0 = 1;       // ������ʱ��T0
}

void Uart_Init()
{
    TMOD = 0x20;  // ���ö�ʱ��1����ģʽΪģʽ2���Զ���װ��ֵ��
    TH1 = 0xFD;   // ������9600������11.0592MHzʱ�������ö�ʱ����ֵ
    TL1 = 0xFD;
    TR1 = 1;      // ������ʱ��1

    SCON = 0x50;  // ���ڹ�����ʽ1���������
    ES = 1;       // �������ж�
    EA = 1;       // �����ж�
}

// �������ڹر��ⲿ�ж�4
void close_interrupt4(void)
{
    IE &= 0xBF;  
}


void sendByte(unsigned char dat)
{
    SBUF = dat;  // ������д�뷢�ͻ���Ĵ�������������
    while (!TI); // �ȴ�������ɣ�TIΪ�����жϱ�־λ��������ɺ���Ӳ����1
    TI = 0;      // Ϊ��һ�η�����׼��
}


// ���͵��ʵĺ���
void send_word(unsigned char* arr)
{		
		int retry_count = 0;
    for (i = 0; i < 11; i++) {
				if (arr[i] == 255) {
					  // ���͵��ʴ�������ź�
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
        // �ȴ�
        DelayMs(500);
        retry_count++;
    }
		if(retry_count < MAX_RESEND_TIMES){
			// ����ɹ�
			begin_index++;
			total_number++;
			if(begin_index>=word_number || total_number > 8){
				//  ��ͷ�ˣ���һ�ζ�ս������
				sendByte(FIGHT_END);
				begin_index = 1;
				total_number = 0;
				// ��ʼ��ս����ĳ���
				// ������˵÷֣�
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
			// ��ʾ����
			if(begin_index) fighting_show(show_data,2);
			// �������͵��Ŵ�����
			if(begin_index) state = 26;
		}else{
			// ����ʧ��
			cant_connect();
		}
}

void pairing(){
		int successful = 0;
		
		Display_HZ( 2, 3, 32, 41); // ��ʾ��ʼ����
		Display_HZ( 2, 3, 48, 42);
		Display_HZ( 1, 3, 0, 48);
		Display_HZ( 1, 3, 16,49);
		sendByte(PAIR_REQUEST_CODE);
		DelayMs(500); // �ȴ�0.3��
    

    for(i=3;i>0;i--)
    {
        if (RI)
        {
            if (SBUF == PAIR_ALLOW_CODE){
								// �յ����������Ӧ
                RI = 0;
                successful = 1;
                break;
            }
            else{
								// û�н��յ����������Ӧ
                RI = 0;
								DelayMs(300);
            }
						RI = 0;
        }
				DelayMs(300);
    }
		if(successful){
			// ��ʼ��ս
			Display_HZ( 2, 3, 16, 47); 
			Display_HZ( 2, 3, 32, 41); // ��ʾ��ʼ��ս
			Display_HZ( 2, 3, 48, 42);
			Display_HZ( 1, 3, 0, 18);
			Display_HZ( 1, 3, 16,19);	
			Display_HZ( 1, 3, 32, 47);
			// ����Ҫѡ�񵥴�
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

// �����������ݣ��������չ��̣�
void ReceiveArray(int command) {
		if(command){
    is_receiving = 1;
		}else{
			is_receiving = 0;
		}
}

// ���ն˴����жϷ�����
void UartIsr() interrupt 4 {
    if (RI) {
        RI = 0;
				receivedData = SBUF;
        if(receivedData == PAIR_REQUEST_CODE){
					//display_number(10,0);
					// �������
					if(state == 0 || state == -1 ){
						ReceiveArray(1);
						sendByte(PAIR_ALLOW_CODE);  // �������
						// ��ʼ��ս
						recite_ans_record = 0;
						total_number = 0;
						for(i = 0;i<11;i++){
							show_data[i] = 255;
						}
						state = 25;
						Clear();
						Display_HZ( 2, 3, 16, 47); 
						Display_HZ( 2, 3, 32, 41); // ��ʾ��ʼ��ս
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
						//���ͷ��ᣬ�Է�����յ�֪:��
						set_bit_for_fight(total_number,2);
						// ��ʼ�¸�����
						state = 24;
						ReceiveArray(0); 
						get_word_info(begin_index, show_data);
						send_word(show_data);
					}else if(state == 34){
						 //���շ��ᣬ�Է�����յ�֪:��
						set_bit_for_fight(total_number,2);
						state = 25;
						ReceiveArray(1); // �ȴ��µĵ��ʵĵ���
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
						//���ͷ��ᣬ�Է�����յ�֪:����
						set_bit_for_fight(total_number,3);
						// ��ʼ�¸�����
						state = 24;
						ReceiveArray(0); 
						get_word_info(begin_index, show_data);
						send_word(show_data);
					}else if(state == 34){
						 //���շ��ᣬ�Է�����յ�֪:����
						set_bit_for_fight(total_number,3);
						state = 25;
						ReceiveArray(1); // �ȴ��µĵ��ʵĵ���
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
							// ��������Ѿ���������
							is_receiving = 0;
							sendByte(CALLBACK);
							word_lenth_counter = 0;
							// չʾ����t
							total_number+=1; //ǰ��Ӷ��ˣ����ǲ��������ǵ�����Ҳ�п��ܳ�����
							fighting_show(show_data,2);
							/*
							display_number(total_number,0);
							DelayMs(1000);
							for(i=0;i<total_number-1;i++){
								display_number(show_data[i],2);
								DelayMs(1000);
							}*/
							// �������״̬
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
		// ������
		Display_HZ( 2, 3, 32, 13);
		Display_HZ( 2, 3, 48, 6);
		Display_HZ( 1, 3, 0, 7);
		Display_HZ( 1, 3, 16, 8);
	}else{
		// ��ս
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
				// ����
				Display_HZ(1,0,48,26);
			}else{
				// ����
				Display_HZ(1,0,48,27);
			}
		}else if(i == 8){
			if(get_bit(i)){
				// ����
				Display_HZ(2,0,0,26);
			}else{
				// ����
				Display_HZ(2,0,0,27);
			}
		}else if(i>=4){
			if(get_bit(i)){
				// ����
				Display_HZ(1,4,i*16,24);
			}else{
				// ����
				Display_HZ(1,4,i*16,25);
			}
			
		}else{
			if(get_bit(i)){
				// ����
				Display_HZ(2,4,i*16,24);
			}else{
				// ����
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

// �ⲿ�ж�0���жϷ�����
void int0_service() interrupt 0
{
	if(state == 0){
		// ������
		// ���е���ѡ��
		// �ر��ⲿ�ж�4
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
		// ��ս
		state = 20; // ���״̬
		ReceiveArray(0);
		Uart_Init();
		Clear();
		recite_ans_record = 0; // ��ռ�¼
		Display_HZ( 2, 3, 32, 37);
		Display_HZ( 2, 3, 48, 38);
		Display_HZ( 1, 3, 0, 39);
		Display_HZ( 1, 3, 16,40);
		Display_HZ( 2, 6, 0, 33);
		Display_HZ( 1, 6, 48, 15);
	}else if(state == 10){
		// ������ʼ��ȷ��,���뱳�л���
		close_interrupt4();
		state = 11;
		recite_words_showing(0);
		begin_index++;
		total_number++;
	}else if(state == 11){
		if(P31 == 0){
			// ��
			
			if(begin_index<word_number && total_number<=10){
				set_bit(total_number-1,1);
				// ��û�б��꣬������һ��
				recite_words_showing(1);
				begin_index++;
				total_number++;
				
			}else{
				// ���뱳��չʾ�׶�
				state = 12;
				recite_res_showing();
			}
			// �������ctrl�� �Ǿ�û���κ���Ӧ
		}
		
	}else if(state == 12 || state == 20 || state == 23 || state == 40){
		// �ص�������
		state = 0;
		ReceiveArray(1);
		begin_index = 1;
		total_number = 0;
		recite_ans_record = 0;
		word_number = get_word_count();
		Uart_Init();
		select_function_interface(0);
	}else if(state == 22){
		// ������ʼ���Ѿ�ѡ���ˣ���ʼ��ʽ��ս
		state = 24;
		total_number = 0;  // ��ʼ������
		recite_ans_record = 0;
		// ���͵�һ������
		get_word_info(begin_index,show_data);
		send_word();
	}else if(state == 26){
		// ���ͷ���, ���ҽ��շ���û�з���
		sendByte(RECITE_FINISH_right); //���ͻ���ź�
		// ������֮����Ҫ�ȴ��Է��Ļ㱨
		set_bit_for_fight(total_number,3); // �ȵǼ���
		state = 32;
		//display_number(32,0);
		
	}else if(state == 27){
		// ���շ��� �� ���ͷ���û�з���
		sendByte(RECITE_FINISH_right); //���ͻ���ź�
		//ReceiveArray(1);  // �ĵ�����
		state = 34;
		set_bit_for_fight(total_number,3); // �ȵǼ���
		//display_number(34,0);
		
	}else if(state == 28){
		// ���ͷ���, ���շ����Ȼ�
		set_bit_for_fight(total_number,1); 
		if(state % 2 == 0){
			// �Ƿ��ͷ�,���л���һ��������
			sendByte(RECITE_FINISH_right);
			DelayMs(300); 
			state = 24;
			ReceiveArray(0); 
			get_word_info(begin_index, show_data);
			send_word(show_data);
		}else{
			state = 25;
			sendByte(RECITE_FINISH_right); //���ͻ���ź�
			ReceiveArray(1); 
		}
		
	}else if(state == 29){
		// ���շ��ᣬ���ͷ����Ȼ�
		set_bit_for_fight(total_number,1); 
		if(state % 2 == 0){
			// �Ƿ��ͷ�,���л���һ��������
			sendByte(RECITE_FINISH_right);
			DelayMs(300); 
			state = 24;
			ReceiveArray(0); 
			get_word_info(begin_index, show_data);
			send_word(show_data);
		}else{
			state = 25;
			sendByte(RECITE_FINISH_right); //���ͻ���ź�
			ReceiveArray(1); 
		}
		
	}else if(state == 30){
		// ���ͷ���, ���շ�����
		set_bit_for_fight(total_number,3); 
		if(state % 2 == 0){
			// �Ƿ��ͷ�,���л���һ��������
			DelayMs(300); 
			state = 24;
			ReceiveArray(0); 
			get_word_info(begin_index, show_data);
			send_word(show_data);
		}else{
			state = 25;
			sendByte(RECITE_FINISH_right); //���ͻ���ź�
			ReceiveArray(1); 
		}
	}else if(state == 31){
		// ���շ��ᣬ���ͷ�����
		set_bit_for_fight(total_number,3); 
		if(state % 2 == 0){
			// �Ƿ��ͷ�,���л���һ��������
			sendByte(RECITE_FINISH_right);
			DelayMs(300); 
			state = 24;
			ReceiveArray(0); 
			get_word_info(begin_index, show_data);
			send_word(show_data);
		}else{
			state = 25;
			sendByte(RECITE_FINISH_right); //���ͻ���ź�
			ReceiveArray(1); 
		}
		
	}
	
}

// ��ʱ��T0�жϷ�����
void Timer0_ISR() interrupt 1
{
    TH0 = 0xFC;    // ����װ���ֵ����ʱ1ms����8λ��
    TL0 = 0x18;    // ����װ���ֵ����ʱ1ms����8λ��
    count++;       // ÿ����һ���жϣ�����������1
}

// �ⲿ�ж�1���жϷ�����
void int1_service() interrupt 2
{
	if(state == 0 || state == -1){
		// ģʽѡ��
		if(state == -1){
			// ������
			Display_HZ( 2, 3, 32, 13);
			Display_HZ( 2, 3, 48, 6);
			Display_HZ( 1, 3, 0, 7);
			Display_HZ( 1, 3, 16, 8);
			state = 0;
			close_interrupt4();
		}else if(state == 0){
			// ��ս
			Display_HZ( 2, 3, 32, 16);
			Display_HZ( 2, 3, 48, 18);
			Display_HZ( 1, 3, 0, 19);
			Display_HZ( 1, 3, 16,17);
			state = -1;
			Uart_Init();
		}
	}else if(state == 10 || state == 22){
		// ������ʼ��ѡ��
		if(P31==0){word_begin_selection(1);}
		else{word_begin_selection(0);}
	}else if(state == 11){
			if(P31 == 0){
				// ����
				set_bit(total_number-1,0);
				if(begin_index<word_number && total_number<=10){
					// ��û�б��꣬������һ��
					recite_words_showing(1);
					begin_index++;
					total_number++;
					
				}else{
					// ���뱳��չʾ�׶�
					state = 12;
					recite_res_showing();
				}
			}else if(P31 == 1){
				// ������ctrl��Ӧ�ý��лع�
				if(total_number-1 > 0){
					begin_index--;
					total_number--;
					recite_words_showing(1);
				}
			}
		
	}else if(state == 12){
		// ��ʼ��һ�ֱ���
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
		// �������ߺ��ˣ�Ҫ��ʼ�����
		Display_HZ( 2, 3, 32, 41); // ��ʾ��ʼ���
		Display_HZ( 2, 3, 48, 42);
		Display_HZ( 1, 3, 0, 43);
		Display_HZ( 1, 3, 16,18);
		state = 21;
		pairing();
	}else if(state == 26){
		// ���ͷ�����, ���ҽ��շ���û�з���
		sendByte(RECITE_FINISH_wrong); //���Ͳ�����ź�
		// ������֮����Ҫ�ȴ��Է��Ļ㱨
		set_bit_for_fight(total_number,0); // �ȵǼ���,�����Ѿ�������
		state = 33; // ���ͷ����ᣬ�Է���֪��
	}else if(state == 27){
		// ����ʵʵ�ȷ��ͷ��ĵ�����Ϣ
		sendByte(RECITE_FINISH_wrong); //���Ͳ�����ź�
		set_bit_for_fight(total_number,0);
		state = 25;
		ReceiveArray(1); // �ȴ��µĵ��ʵĵ���
		
	}else if(state>=28 && state <= 31){
		// ���շ����� �� ���ͷ��Ѿ�������
		sendByte(RECITE_FINISH_wrong); //���Ͳ�����ź�
		set_bit_for_fight(total_number,0); // �ȵǼ���,��������Ѿ�������
		if(state % 2 == 0){
			// �Ƿ��ͷ�,���л���һ��������
			state = 24;
			get_word_info(begin_index, show_data);
			send_word(show_data);
		}else{
			state = 25;
		}
	}

}

void main(){
		// �ⲿ�ж�0��ʼ��������Ϊ�½��ش���
    IT0 = 1;
    EX0 = 1;
    // �ⲿ�ж�1��ʼ��������Ϊ�½��ش���
    IT1 = 1;
    EX1 = 1;
    // �����ж�����λ
    EA = 1;
		// ��ʼ����ʾ����
		for(i = 0;i<11;i++){
			show_data[i] = 255;
		}
		word_number = get_word_count();
		
		
		//���濪ʼ����������
		Clear();
		Display_HZ( 2, 3, 16, 4);
		Display_HZ( 2, 3, 32, 0);
		Display_HZ( 2, 3, 48, 1);
		Display_HZ( 1, 3, 0, 2);
		Display_HZ( 1, 3, 16, 3);
		Display_HZ( 1, 3, 32, 4);
		DelayMs(1000);
		//����Ӧ���ټ��ϳ�ʼ���˿�
		Timer0_Init();
		Uart_Init();
		// ���������ҳ��
		state = 0;
		select_function_interface(0);
		
		
	while(1){

	}
	
}