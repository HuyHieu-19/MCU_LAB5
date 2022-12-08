/*
 * software_timer.h
 *
 *  Created on: Dec 7, 2022
 *      Author: Huy Hieu
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag;
extern int timer_counter;

void setTimer(int duration);
void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
