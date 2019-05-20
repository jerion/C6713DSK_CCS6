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
        /* Check DIP switch #0 and light LED #0 accordingly, 0 = switch pressed */
        if (DSK6713_DIP_get(0) == 0)
           /* Switch pressed,turn LED #0 on */
            DSK6713_LED_on(0);
        else
           /* Switch not pressed,turn LED #0 off */
            DSK6713_LED_off(0);

        /* Spin in a software delay loop for about 200ms */
        DSK6713_waitusec(200000);
    }
}



