/*
 * displayTime.c
 *
 *  Created on: Nov 16, 2024
 *      Author: ASUS TUF GAMING
 */

#include "displayTime.h"

int toggleVar = 0;

void displayNormalTime(int date, int month, int year, int day, int hour, int minute, int second){

	lcd_ShowIntNum(70, 100, date, 2, GREEN, BLACK, 24);
	lcd_ShowChar(95, 100, '/', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(110, 100, month, 2, GREEN, BLACK, 24);
	lcd_ShowChar(135, 100, '/', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(150, 100, year, 2, GREEN, BLACK, 24);

	lcd_ShowIntNum(110, 130, day, 2, YELLOW, BLACK, 24);

	lcd_ShowIntNum(70, 160, hour, 2, GREEN, BLACK, 24);
	lcd_ShowChar(95, 160, ':', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(110, 160, minute, 2, GREEN, BLACK, 24);
	lcd_ShowChar(135, 160, ':', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(150, 160, second, 2, GREEN, BLACK, 24);

}

void displayNoDateTime(int date, int month, int year, int day, int hour, int minute, int second){

	lcd_ShowIntNum(70, 100, date, 2, BLACK, BLACK, 24);
	lcd_ShowChar(95, 100, '/', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(110, 100, month, 2, GREEN, BLACK, 24);
	lcd_ShowChar(135, 100, '/', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(150, 100, year, 2, GREEN, BLACK, 24);

	lcd_ShowIntNum(110, 130, day, 2, YELLOW, BLACK, 24);

	lcd_ShowIntNum(70, 160, hour, 2, GREEN, BLACK, 24);
	lcd_ShowChar(95, 160, ':', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(110, 160, minute, 2, GREEN, BLACK, 24);
	lcd_ShowChar(135, 160, ':', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(150, 160, second, 2, GREEN, BLACK, 24);

}

void displayNoMonthTime(int date, int month, int year, int day, int hour, int minute, int second){

	lcd_ShowIntNum(70, 100, date, 2, GREEN, BLACK, 24);
	lcd_ShowChar(95, 100, '/', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(110, 100, month, 2, BLACK, BLACK, 24);
	lcd_ShowChar(135, 100, '/', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(150, 100, year, 2, GREEN, BLACK, 24);

	lcd_ShowIntNum(110, 130, day, 2, YELLOW, BLACK, 24);

	lcd_ShowIntNum(70, 160, hour, 2, GREEN, BLACK, 24);
	lcd_ShowChar(95, 160, ':', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(110, 160, minute, 2, GREEN, BLACK, 24);
	lcd_ShowChar(135, 160, ':', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(150, 160, second, 2, GREEN, BLACK, 24);

}

void displayNoYearTime(int date, int month, int year, int day, int hour, int minute, int second){

	lcd_ShowIntNum(70, 100, date, 2, GREEN, BLACK, 24);
	lcd_ShowChar(95, 100, '/', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(110, 100, month, 2, GREEN, BLACK, 24);
	lcd_ShowChar(135, 100, '/', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(150, 100, year, 2, BLACK, BLACK, 24);

	lcd_ShowIntNum(110, 130, day, 2, YELLOW, BLACK, 24);

	lcd_ShowIntNum(70, 160, hour, 2, GREEN, BLACK, 24);
	lcd_ShowChar(95, 160, ':', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(110, 160, minute, 2, GREEN, BLACK, 24);
	lcd_ShowChar(135, 160, ':', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(150, 160, second, 2, GREEN, BLACK, 24);

}

void displayNoDayTime(int date, int month, int year, int day, int hour, int minute, int second){

	lcd_ShowIntNum(70, 100, date, 2, GREEN, BLACK, 24);
	lcd_ShowChar(95, 100, '/', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(110, 100, month, 2, GREEN, BLACK, 24);
	lcd_ShowChar(135, 100, '/', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(150, 100, year, 2, GREEN, BLACK, 24);

	lcd_ShowIntNum(110, 130, day, 2, BLACK, BLACK, 24);

	lcd_ShowIntNum(70, 160, hour, 2, GREEN, BLACK, 24);
	lcd_ShowChar(95, 160, ':', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(110, 160, minute, 2, GREEN, BLACK, 24);
	lcd_ShowChar(135, 160, ':', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(150, 160, second, 2, GREEN, BLACK, 24);

}

void displayNoHourTime(int date, int month, int year, int day, int hour, int minute, int second){

	lcd_ShowIntNum(70, 100, date, 2, GREEN, BLACK, 24);
	lcd_ShowChar(95, 100, '/', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(110, 100, month, 2, GREEN, BLACK, 24);
	lcd_ShowChar(135, 100, '/', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(150, 100, year, 2, GREEN, BLACK, 24);

	lcd_ShowIntNum(110, 130, day, 2, YELLOW, BLACK, 24);

	lcd_ShowIntNum(70, 160, hour, 2, BLACK, BLACK, 24);
	lcd_ShowChar(95, 160, ':', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(110, 160, minute, 2, GREEN, BLACK, 24);
	lcd_ShowChar(135, 160, ':', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(150, 160, second, 2, GREEN, BLACK, 24);

}

void displayNoMinuteTime(int date, int month, int year, int day, int hour, int minute, int second){

	lcd_ShowIntNum(70, 100, date, 2, GREEN, BLACK, 24);
	lcd_ShowChar(95, 100, '/', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(110, 100, month, 2, GREEN, BLACK, 24);
	lcd_ShowChar(135, 100, '/', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(150, 100, year, 2, GREEN, BLACK, 24);

	lcd_ShowIntNum(110, 130, day, 2, YELLOW, BLACK, 24);

	lcd_ShowIntNum(70, 160, hour, 2, GREEN, BLACK, 24);
	lcd_ShowChar(95, 160, ':', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(110, 160, minute, 2, BLACK, BLACK, 24);
	lcd_ShowChar(135, 160, ':', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(150, 160, second, 2, GREEN, BLACK, 24);

}

void displayNoSecondTime(int date, int month, int year, int day, int hour, int minute, int second){

	lcd_ShowIntNum(70, 100, date, 2, GREEN, BLACK, 24);
	lcd_ShowChar(95, 100, '/', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(110, 100, month, 2, GREEN, BLACK, 24);
	lcd_ShowChar(135, 100, '/', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(150, 100, year, 2, GREEN, BLACK, 24);

	lcd_ShowIntNum(110, 130, day, 2, YELLOW, BLACK, 24);

	lcd_ShowIntNum(70, 160, hour, 2, GREEN, BLACK, 24);
	lcd_ShowChar(95, 160, ':', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(110, 160, minute, 2, GREEN, BLACK, 24);
	lcd_ShowChar(135, 160, ':', GREEN, BLACK, 24, 1);
	lcd_ShowIntNum(150, 160, second, 2, BLACK, BLACK, 24);

}

void displayToggleTime(int date, int month, int year, int day, int hour, int minute, int second, int indexToggle){
	if (toggleVar == 0){
		displayNormalTime(date, month, year, day, hour, minute, second);
	}
	else {
		switch(indexToggle) {
		case 0:
			displayNoDateTime(date, month, year, day, hour, minute, second);
			break;
		case 1:
			displayNoMonthTime(date, month, year, day, hour, minute, second);
			break;
		case 2:
			displayNoYearTime(date, month, year, day, hour, minute, second);
			break;
		case 3:
			displayNoDayTime(date, month, year, day, hour, minute, second);
			break;
		case 4:
			displayNoHourTime(date, month, year, day, hour, minute, second);
			break;
		case 5:
			displayNoMinuteTime(date, month, year, day, hour, minute, second);
			break;
		case 6:
			displayNoSecondTime(date, month, year, day, hour, minute, second);
			break;

		default:
			break;
		}
	}
}
