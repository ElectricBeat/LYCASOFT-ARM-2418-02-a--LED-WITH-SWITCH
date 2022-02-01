#include<lpc21xx.h>
#include "LPC2148_delay.h"

int main()
{
	PINSEL0 = 0X00000000;
	IODIR0 = 0X00000001;
	IOPIN0 = 0X00000000;
	
	while(1)
	{
		if(IOPIN0 == 0X00000002)
		{
			IOSET0 = 0X00000001;
		}
		
		else
		{
			IOCLR0 = 0X00000001;
		}
	}
}