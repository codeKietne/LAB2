/*
 * software_timer.c
 *
 *  Created on: Sep 30, 2024
 *      Author: Nguyen Quoc Kiet
 */
#include "software_timer.h"
int timer1_counter = 0;
int timer1_flag = 0;
int timer0_counter = 0;
int timer0_flag = 0;
int timer2_counter = 0;
int timer2_flag = 0;
int timer3_counter = 0;
int timer3_flag = 0;
int TIMER_CYCLE = 10;

void setTimer0(int duration)
{
	timer0_counter = duration / TIMER_CYCLE ;
	timer0_flag = 0;
}
void timerRun0()
{
	if(timer0_counter > 0)
	{
		timer0_counter--;
		if(timer0_counter <= 0)
		{
			timer0_flag = 1;
		}
	}
}

void setTimer1(int duration)
{
	timer1_counter = duration / TIMER_CYCLE;
	timer1_flag = 0;
}
void timerRun1()
{
	if(timer1_counter > 0)
	{
		timer1_counter--;
		if(timer1_counter <= 0)
		{
			timer1_flag = 1;
		}
	}
}

void setTimer2(int duration)
{
	timer2_counter = duration / TIMER_CYCLE ;
	timer2_flag = 0;
}
void timerRun2()
{
	if(timer2_counter > 0)
	{
		timer2_counter--;
		if(timer2_counter <= 0)
		{
			timer2_flag = 1;
		}
	}
}

void setTimer3(int duration)
{
	timer3_counter = duration / TIMER_CYCLE / TIMER_CYCLE ;
	timer3_flag = 0;
}
void timerRun3()
{
	if(timer3_counter > 0)
	{
		timer3_counter--;
		if(timer3_counter <= 0)
		{
			timer3_flag = 1;
		}
	}
}

