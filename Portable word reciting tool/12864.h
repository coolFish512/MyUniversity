#ifndef __12864_H__
#define __12864_H__

#include <reg51.h>
#include <intrins.h>

#define uint unsigned int
#define uchar unsigned char
	
#define DATA P1 
sbit RS=P3^6; 
sbit RW=P3^7; 
sbit EN=P3^4; 
sbit cs1=P3^5; 


uchar code Hzk[];
uchar code Szk[];
uchar code Fhk[];
uchar code Zmk[];

void CheckState();
void SendCommandToLCD(uchar com);
void SetLine(uchar page);
void SetStartLine(uchar startline);
void SetColumn(uchar column);
void SetOnOff(uchar onoff);
void WriteByte(uchar dat)	;
void SelectScreen(uchar screen);
void ClearScreen(uchar screen);	
void Clear();
void InitLCD() ;
void Display_HZ(uchar screen,uchar page,uchar column,uchar number);
void Display_SZ(uchar screen,uchar page,uchar column,uchar number);
void Display_ZM(uchar screen,uchar page,uchar column,uchar number);
void Display_FH(uchar screen,uchar page,uchar column,uchar number);
void display_str(unsigned char* show_data,uchar page);
int get_char_index(int asc);
void display_number(int number,uchar page);
int abs(int number);
int two_star(int a,int b);

#endif