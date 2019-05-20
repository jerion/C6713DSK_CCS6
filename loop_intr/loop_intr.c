//loop_intr.c loop program using interrupts

#include "DSK6713_AIC23.h"	        //codec support
Uint32 fs=DSK6713_AIC23_FREQ_48KHZ;	//set sampling rate
#define DSK6713_AIC23_INPUT_MIC 0x0015
#define DSK6713_AIC23_INPUT_LINE 0x0011
#define N 300

Uint16 inputsource=DSK6713_AIC23_INPUT_LINE; // select input
short input_buffer[N];
short input_buffer_count=0;

interrupt void c_int11()         //interrupt service routine
{
	 short sample_data;
	 sample_data = (short)input_sample(); //input data

	 input_buffer[input_buffer_count]=sample_data;

	 output_sample(sample_data);   //output data
	 if(++input_buffer_count >= N) input_buffer_count=0;
	 return;
}

void main()
{
  comm_intr();                 //init DSK, codec, McBSP
  while(1);                	   //infinite loop
}
 
