/*
 * displayTime.h
 *
 *  Created on: Nov 16, 2024
 *      Author: ASUS TUF GAMING
 */

#ifndef INC_DISPLAYTIME_H_
#define INC_DISPLAYTIME_H_

#include "lcd.h"
#include "picture.h"
#include "ds3231.h"

extern int toggleVar;

void displayNormalTime(int date, int month, int year, int day, int hour, int minute, int second);
void displayToggleTime(int date, int month, int year, int day, int hour, int minute, int second, int indexToggle);

#endif /* INC_DISPLAYTIME_H_ */
