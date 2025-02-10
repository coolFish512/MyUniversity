#include "S_and_R_tool.h"


// 定义定时中断次数计数变量
unsigned int count = 0;

int send_index = 0; // 当前要发送数据的下标

int i = 0; // for


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

// 初始化串口
void initUart()
{
    TMOD |= 0x20;    // 定时器1工作模式2，8位自动重装
    TH1 = TIMER1_RELOAD >> 8;
    TL1 = TIMER1_RELOAD;
    TR1 = 1;         // 启动定时器1
    SCON = 0x50;     // 串口工作方式1，允许接收
    EA = 1;          // 开总中断
    ES = 1;          // 开串口中断
}

// 定时器T0中断服务函数
void Timer0_ISR() interrupt 1
{
    TH0 = 0xFC;    // 重新装入初值，定时1ms（高8位）
    TL0 = 0x18;    // 重新装入初值，定时1ms（低8位）
    count++;       // 每进入一次中断，计数变量加1
}

// 延时函数，参数n代表要延时的毫秒数
void Delay_ms(unsigned int n)
{
    count = 0;    // 初始化计数变量
    while (count < n);  // 当计数变量小于指定的毫秒数时，持续等待
}

// 发送一个字节数据的函数
void sendByte(unsigned char dat)
{
    SBUF = dat;
    while(TI == 0);  // 等待发送完成
    TI = 0;          // 清除发送中断标志位
}


// 发送单词的函数
void sendData(int dataArray[])
{
    int resendCount = 0;
		if (dataArray[send_index]!= 255){
				// 正常数据发送,还没有发送完
				sendByte((unsigned char)(dataArray[send_index] >> 8));  // 先发送高字节
				sendByte((unsigned char)(dataArray[send_index]));       // 再发送低字节
				Delay_ms(200); // 等待0.2秒
				// 等待回声
				while (1)
				{
						if (resendCount >= MAX_RESEND_TIMES){
								break;
						}
						if (RI){
								if (SBUF == CALLBACK){
										// 收到回声
										RI = 0;
										break;
								}else{
										RI = 0;
								}
						}
						// 没收到确认信号，重发
						sendByte((unsigned char)(dataArray[send_index] >> 8));
						sendByte((unsigned char)(dataArray[send_index]));
						resendCount++;
						Delay_ms(300); // 等待0.3秒
				}
				if (resendCount < MAX_RESEND_TIMES){
					  // 收到了回声，要进行显示了
						// 显示单词
					
						send_index++;
				}else{
						// 显示等待超时，随后返回主界面
				}
		}
		else {
				// 发送停止信号,表示对战停止
				sendByte(FIGHT_END);
				// 等待成绩报告
				
		}
}

void pairing(){
		int successful = 0;
		// 发送配对请求
    sendByte(PAIR_REQUEST_CODE);
		Delay_ms(300); // 等待0.3秒
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
								Delay_ms(300);
            }
        }
				if(successful) break;
				Delay_ms(300);
    }
		if(successful){
			// 开始对战
		}else{
			//显示配对失败
		}
}


/*
// 主函数，先进行配对，然后发送数据
void main()
{
    int dataToSend[] = {1234, 5678, 9012, 255};  // 示例数据数组，最后一个为停止信号255，可根据实际修改
    int arrayLength = sizeof(dataToSend) / sizeof(dataToSend[0]);
    initUart();
    // 发送配对请求
    sendByte(PAIR_REQUEST_CODE);
    while (1)
    {
        if (RI)
        {
            if (SBUF == PAIR_ALLOW_CODE)  // 收到允许配对响应
            {
                RI = 0;
                sendData(dataToSend, arrayLength);
                break;
            }
            else
            {
                RI = 0;
            }
        }
    }
}*/


// 串口中断服务程序（这里简单处理接收的情况，可根据实际进一步完善）
void serial() interrupt 4
{
    if (RI)
    {
        RI = 0;
    }
    if (TI){
			// 接收到数据引起的中断
        TI = 0;
			if(SBUF == RECITE_FINISH){
				// 接收方提前背完了单词
				// 记录成绩
				
				// 发送新的数据
				sendData(); 
			}
    }
}



