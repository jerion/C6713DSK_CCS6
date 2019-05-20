// File: main.c
// Author: Tony Yu (tony.mcudsp@gmail.com)
// DIP by C function and Board Support Library
#include "dsk6713.h"
#include "dsk6713_led.h"
#include "dsk6713_dip.h"
int main(void)
{
    /* Initialize the board support library, must be first BSL call */
    DSK6713_init();
    /* Initialize the LED and DIP switch modules of the BSL */
    DSK6713_LED_init();
    DSK6713_DIP_init();

    while(1)
    {
	   /*Turn On LED 0*/
    DSK6713_LED_on(0);
    /* Spin in a software delay loop for about 200ms */
	   DSK6713_waitusec(200000);
	   /*Turn On LED 1*/
    DSK6713_LED_on(1);
    /* Spin in a software delay loop for about 200ms */
	   DSK6713_waitusec(200000);
	   /*Turn On LED 2*/
    DSK6713_LED_on(2);
    /* Spin in a software delay loop for about 200ms */
	   DSK6713_waitusec(200000);
	   /*Turn On LED 3*/
    DSK6713_LED_on(3);
    /* Spin in a software delay loop for about 200ms */
	   DSK6713_waitusec(200000);

	/* Toggle LED #0123 */
    DSK6713_LED_toggle(0);
	DSK6713_LED_toggle(1);
	DSK6713_LED_toggle(2);
	DSK6713_LED_toggle(3);
    /* Spin in a software delay loop for about 200ms */
	   DSK6713_waitusec(200000);
    }
}



