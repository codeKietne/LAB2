/*
 * software_timer.h
 *
 *  Created on: Sep 28, 2024
 *      Author: Nguyen Quoc Kiet
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer0_flag;
void setTimer0(int duration);
void setTimer1(int duration);
void timerRun0();
void timerRun1();

#endif /* INC_SOFTWARE_TIMER_H_ */
