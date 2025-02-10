#include "S_and_R_tool.h"


// ���嶨ʱ�жϴ�����������
unsigned int count = 0;

int send_index = 0; // ��ǰҪ�������ݵ��±�

int i = 0; // for


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

// ��ʼ������
void initUart()
{
    TMOD |= 0x20;    // ��ʱ��1����ģʽ2��8λ�Զ���װ
    TH1 = TIMER1_RELOAD >> 8;
    TL1 = TIMER1_RELOAD;
    TR1 = 1;         // ������ʱ��1
    SCON = 0x50;     // ���ڹ�����ʽ1���������
    EA = 1;          // �����ж�
    ES = 1;          // �������ж�
}

// ��ʱ��T0�жϷ�����
void Timer0_ISR() interrupt 1
{
    TH0 = 0xFC;    // ����װ���ֵ����ʱ1ms����8λ��
    TL0 = 0x18;    // ����װ���ֵ����ʱ1ms����8λ��
    count++;       // ÿ����һ���жϣ�����������1
}

// ��ʱ����������n����Ҫ��ʱ�ĺ�����
void Delay_ms(unsigned int n)
{
    count = 0;    // ��ʼ����������
    while (count < n);  // ����������С��ָ���ĺ�����ʱ�������ȴ�
}

// ����һ���ֽ����ݵĺ���
void sendByte(unsigned char dat)
{
    SBUF = dat;
    while(TI == 0);  // �ȴ��������
    TI = 0;          // ��������жϱ�־λ
}


// ���͵��ʵĺ���
void sendData(int dataArray[])
{
    int resendCount = 0;
		if (dataArray[send_index]!= 255){
				// �������ݷ���,��û�з�����
				sendByte((unsigned char)(dataArray[send_index] >> 8));  // �ȷ��͸��ֽ�
				sendByte((unsigned char)(dataArray[send_index]));       // �ٷ��͵��ֽ�
				Delay_ms(200); // �ȴ�0.2��
				// �ȴ�����
				while (1)
				{
						if (resendCount >= MAX_RESEND_TIMES){
								break;
						}
						if (RI){
								if (SBUF == CALLBACK){
										// �յ�����
										RI = 0;
										break;
								}else{
										RI = 0;
								}
						}
						// û�յ�ȷ���źţ��ط�
						sendByte((unsigned char)(dataArray[send_index] >> 8));
						sendByte((unsigned char)(dataArray[send_index]));
						resendCount++;
						Delay_ms(300); // �ȴ�0.3��
				}
				if (resendCount < MAX_RESEND_TIMES){
					  // �յ��˻�����Ҫ������ʾ��
						// ��ʾ����
					
						send_index++;
				}else{
						// ��ʾ�ȴ���ʱ����󷵻�������
				}
		}
		else {
				// ����ֹͣ�ź�,��ʾ��սֹͣ
				sendByte(FIGHT_END);
				// �ȴ��ɼ�����
				
		}
}

void pairing(){
		int successful = 0;
		// �����������
    sendByte(PAIR_REQUEST_CODE);
		Delay_ms(300); // �ȴ�0.3��
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
								Delay_ms(300);
            }
        }
				if(successful) break;
				Delay_ms(300);
    }
		if(successful){
			// ��ʼ��ս
		}else{
			//��ʾ���ʧ��
		}
}


/*
// ���������Ƚ�����ԣ�Ȼ��������
void main()
{
    int dataToSend[] = {1234, 5678, 9012, 255};  // ʾ���������飬���һ��Ϊֹͣ�ź�255���ɸ���ʵ���޸�
    int arrayLength = sizeof(dataToSend) / sizeof(dataToSend[0]);
    initUart();
    // �����������
    sendByte(PAIR_REQUEST_CODE);
    while (1)
    {
        if (RI)
        {
            if (SBUF == PAIR_ALLOW_CODE)  // �յ����������Ӧ
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


// �����жϷ����������򵥴�����յ�������ɸ���ʵ�ʽ�һ�����ƣ�
void serial() interrupt 4
{
    if (RI)
    {
        RI = 0;
    }
    if (TI){
			// ���յ�����������ж�
        TI = 0;
			if(SBUF == RECITE_FINISH){
				// ���շ���ǰ�����˵���
				// ��¼�ɼ�
				
				// �����µ�����
				sendData(); 
			}
    }
}



