
#include <stdio.h>
void delay(unsigned int del);
#define LED_PORT	*(unsigned volatile int*) 0x90080000

void main()
{
	int i =0;
	puts("USER LED Test!\n");
	while(1)
	{
	for(i=0x00;i<=0x0F;i=i+0x01) //bit0-3
	  {
	    LED_PORT = i; 	 //LED1~4 Outpot display
	    delay(12000000); //Delay
	  }
	}
}

void delay(unsigned int del)  //dalay
{
  	  while(del>0)
  	  del--;
}
