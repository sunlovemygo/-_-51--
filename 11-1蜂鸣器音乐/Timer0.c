#include <REGX52.H>

void Timer0_Init(void)
{
	TMOD |= 0x01;
	TH0 = 0xFF;
	TL0 = 0xFF;
	ET0 = 1;
	TR0 = 0;
}

void Time0_SetCounter(unsigned int Value)
{
	TH0 = Value / 256;
	TL0 = Value % 256;
}

void Time0_Run(unsigned char Flag)
{
	TR0 = Flag;
}


