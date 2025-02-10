#include <reg51.h>

// ���岨���ʣ�����ʹ��9600�����ʣ�����Ƶ��Ϊ11.0592MHz
#define BAUD_RATE 9600
#define FOSC 11059200L
#define TIMER1_RELOAD (65536 - (FOSC / 12 / 16 / BAUD_RATE))

// �����������������������Ӧ�룬�����ж�����ʵ�ֵ�������ʾ��
#define PAIR_REQUEST_CODE 0xFE // �����ͷ��ģ� ��������ź�
#define FIGHT_END 0xFB // �����ͷ��ģ���ս�����ź�

#define PAIR_ALLOW_CODE 0xFD // �����շ��ģ� ��������ź�
#define CALLBACK 0xFC // �����շ��������ź�
#define RECITE_FINISH 0xFA  // �����շ��ģ���������ź�

// ��������ط�����
#define MAX_RESEND_TIMES 3