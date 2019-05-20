//Scram16k.c Voice scrambler/de-scrambler program

#include "dsk6713_aic23.h"			//codec-dsk support file
Uint32 fs=DSK6713_AIC23_FREQ_8KHZ;	//set sampling rate
#define DSK6713_AIC23_INPUT_MIC 0x0015
#define DSK6713_AIC23_INPUT_LINE 0x0011
Uint16 inputsource=DSK6713_AIC23_INPUT_LINE; // select input

#include "sine160.h"                //sine data values
#include "LP114.cof"                //filter coefficient file
short filtmodfilt(short data);
short filter(short inp,short *dly);
short sinemod(short input);
static short filter1[N],filter2[N];
short input, output;
short flag = 0;

interrupt void c_int11()         //interrupt service routine
{
       input=(short)input_sample(); //input data       
    
  	   filtmodfilt(input);       //process sample twice(upsample)
	   output=filtmodfilt(input);   //and throw away 1st result
       output_sample(output);       //then output
   return;
}

void main()
{
 short i;
 comm_intr();                    //init DSK 
 for (i=0; i< N; i++)
   {
    filter1[i] = 0;              //init 1st filter buffer 
    filter2[i] = 0;              //init 2nd filter buffer
   }

 while(1);

}

short filtmodfilt(short data)	   //filtering & modulating
{
 data = filter(data,filter1);    //newest in ->1st filter 
 data = sinemod(data);           //modulate with 1st filter out
 data = filter(data,filter2);    //2nd LP filter
 return data;
}

short filter(short inp,short *dly) //implements FIR
{
 short i;
 int yn;

 dly[N-1] = inp;                 //newest sample @bottom buffer
 yn = dly[0] * h[N-1];           //y(0)=x(n-(N-1))*h(N-1)
 for (i = 1; i < N; i++)         //loop for the rest
   {
    yn += dly[i] * h[N-(i+1)];   //y(n)=x[n-(N-1-i)]*h[N-1-i]
    dly[i-1] = dly[i];           //data up to update delays
   }
 yn = (yn >>15);                 //filter's output
 return yn;                      //return y(n) at time n
}

short sinemod(short input)       //sine generation/modulation
{
 static short i=0;

 input=(input*sine160[i++])>>11; //(input)*(sine data)
 if(i>= NSINE) i = 0;            //if end of sine table
 return input;                   //return modulated signal
}
