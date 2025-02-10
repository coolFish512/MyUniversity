#include <reg51.h>

// 定义波特率，这里使用9600波特率，晶振频率为11.0592MHz
#define BAUD_RATE 9600
#define FOSC 11059200L
#define TIMER1_RELOAD (65536 - (FOSC / 12 / 16 / BAUD_RATE))

// 定义配对请求码和允许配对响应码，可自行定义合适的值，这里简单示例
#define PAIR_REQUEST_CODE 0xFE // （发送方的） 配对请求信号
#define FIGHT_END 0xFB // （发送方的）对战结束信号

#define PAIR_ALLOW_CODE 0xFD // （接收方的） 配对允许信号
#define CALLBACK 0xFC // （接收方）回声信号
#define RECITE_FINISH 0xFA  // （接收方的）背诵完成信号

// 定义最大重发次数
#define MAX_RESEND_TIMES 3