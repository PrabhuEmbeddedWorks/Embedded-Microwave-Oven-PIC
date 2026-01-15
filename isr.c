#include <xc.h>
#include "main.h"

/* Extern variables from main.c */
extern unsigned char sec, min;
extern int operation_flag;
extern unsigned char preheat_active;
extern unsigned char cooking_started;
extern unsigned char flag;
extern int reset_flag;


void __interrupt() isr(void)
{
    static unsigned int count = 0;

    if (TMR2IF == 1)
    {
        TMR2IF = 0;

        /* 1250 interrupts = 1 second */
        if (++count == 1250)
        {
            count = 0;

            /* ================= PRE-HEATING ================= */
            if (preheat_active)
            {
                if (sec > 0)
                {
                    sec--;
                }

                if (sec == 0)
                {
                    preheat_active = 0;
                    HEATER = 0;
                    TMR2ON = 0;
                    
                    cooking_started = 0; 
                    
                    
                    clear_screen(); 
                    if (sec == 0)
                    {
                        preheat_active = 0;
                        HEATER = 0;
                        TMR2ON = 0;

                        clear_screen();              // clear LCD once

                        flag = 1;                    // move to time-entry stage
                        reset_flag = RESET_MODE;
                        operation_flag = CONVECTION_MODE;
                    }

                }
            }
            /* ================= NORMAL COOKING =============== */
            else if (cooking_started)
            {
                if (sec > 0)
                {
                    sec--;
                }
                else if (sec == 0 && min > 0)
                {
                    min--;
                    sec = 59;
                }
            }

        }
    }
}
