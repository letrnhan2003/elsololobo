/*
 * software_timer.c
 *
 *  Created on: Mar 19, 2024
 *      Author: nguye
 */

#include "software_timer.h"

#define TIMER_TICK_MS 10 // Define the tick rate of the timer in milliseconds

int timer_counter[10] = {0};
int timer_flag[10] = {0};

// Set the counter for the software timer
void setTimer(int index, int value){
    timer_counter[index] = value / TIMER_TICK_MS;
    timer_flag[index] = 0;
}

// Check if the timer is expired
int isTimerExpired(int index){
    if(timer_flag[index] == 1){
        timer_flag[index] = 0;
        return 1;
    }
    return 0;
}

// Function to be invoked in Timer ISR
void timerRun(){
    for(int i = 0; i < 10; i++){
        if(timer_counter[i] > 0){
            timer_counter[i]--;
            if(timer_counter[i] <= 0) {
                timer_flag[i] = 1;
            }
        }
    }
}
