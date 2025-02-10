#include "delay.h"


void DelayUs(unsigned char t)
{   
 while(--t);
}

void DelayMs(unsigned int z)
{     
	unsigned int i,j;
  for(i=z;i>0;i--)
      for(j=123;j>0;j--);
}

