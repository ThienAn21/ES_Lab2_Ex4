/*
 * clock_fsm.h
 *
 *  Created on: Nov 16, 2024
 *      Author: ASUS TUF GAMING
 */

#ifndef INC_CLOCK_FSM_H_
#define INC_CLOCK_FSM_H_

#include "software_timer.h"
#include "button.h"
#include "lcd.h"
#include "picture.h"
#include "ds3231.h"
#include "displayTime.h"

typedef enum {
	INIT,
	NORMAL,
	MODIFY,
	MODIFYREMIND,
	REQUEST
} ClockState;

typedef enum {
	DATE,
	MONTH,
	YEAR,
	DAY,
	HOUR,
	MINUTE,
	SECOND,
} ClockModifyState;

#define NOREMIND 0
#define REMIND 1

#define MAINTASKTIME 1 // 50ms

extern ClockState clockState;
extern ClockModifyState clockModifyState;
extern int isRemind;

void clock_fsm();
void updateTime(uint8_t date, uint8_t month, uint8_t year, uint8_t day, uint8_t hour, uint8_t minute, uint8_t second);

#endif /* INC_CLOCK_FSM_H_ */
