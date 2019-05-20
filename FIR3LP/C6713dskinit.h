/*C6713dskinit.h Include file for C6713DSK.C */
#ifndef C6713DSKINIT_H
#define C6713DSKINIT_H

#include "dsk6713.h"


#define LEFT  1                  //data structure for union of 32-bit data
#define RIGHT 0                  //into two 16-bit data

union {
	Uint32 uint;
	short channel[2];
	} AIC_data; 

extern far void vectors();         //external function

static Uint32 CODECEventId, poll;



void c6713_dsk_init(void);
void comm_poll(void);
void comm_intr(void);
void output_sample(int);
void output_left_sample(short);
void output_right_sample(short);
Uint32 input_sample(void);
short input_left_sample(void);
short input_right_sample(void);

#endif
