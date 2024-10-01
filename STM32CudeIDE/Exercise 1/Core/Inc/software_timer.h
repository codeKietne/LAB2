/*
 * software_timer.h
 *
 *  Created on: Sep 23, 2024
 *      Author: Nguyen Quoc Kiet
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

void Set_timer(int index, int value);
int isTimerExpired (int index);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
