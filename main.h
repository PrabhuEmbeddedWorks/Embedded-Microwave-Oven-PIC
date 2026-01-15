/* 
 * File:   main.h
 * Author: Prabhu
 *
 * Created on 12 January, 2026, 8:43 PM
 */

#ifndef MAIN_H
#define	MAIN_H

#include <xc.h>
#include "clcd.h"
#include "keypad.h"
#include "timers.h"


#define HEATER_DDR TRISC5
#define HEATER     RC5

#define PREHEAT_TIME 10   // seconds

extern unsigned char preheat_sec;
extern unsigned char preheat_done;
extern unsigned char preheat_active;
extern unsigned char cooking_started;
extern int reset_flag;


#define POWER_SCREEN          0x01
#define MENU                  0x02
#define MICRO_MODE            0x03
#define GRILL_MODE            0x04
#define CONVECTION_MODE       0x05
#define START_MODE            0x06
#define TIME_DISPLAY          0x07
#define START                 0x08
#define PAUSE                 0x09
#define STOP                  0x0A


#define FAN_DDR       TRISC2
#define FAN           RC2
#define BUZZER_DDR    TRISC1
#define BUZZER        RC1


#define RESET_MODE    0x10
#define RESET_NOTHING 0x0F
#define MAX_TEMP      180


void power_screen(void);
void menu(void);
void clear_screen(void);
void set_time(unsigned char key,int reset_flag);
void time_screen(void);
void set_temp(unsigned char key, int reset_flag);



#endif 

