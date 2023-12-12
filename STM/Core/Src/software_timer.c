/*
 * software_timer.c
 *
 *  Created on: Oct 22, 2023
 *      Author: ad
 */
#include "software_timer.h"

int timer_counter[10] = {0};
int timer_flag[10] = {0};

void setTimer(int timer_ID, int duration){
	timer_counter[timer_ID] = duration;
	timer_flag[timer_ID] = 0;
}
void timerRun(){
	for(int i = 0; i < 10; i++){
		if(timer_counter[i] > 0){
			timer_counter[i]--;
			if(timer_counter[i] <= 0){
				timer_flag[i] = 1;
			}
		}
	}
}

