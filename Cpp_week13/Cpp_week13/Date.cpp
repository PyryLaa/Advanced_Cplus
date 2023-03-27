#include <iostream>
#include <string>
#include "Date.h"

void Date::setDay(int m_day) {
	day = m_day;
}
void Date::setMonth(int m_month) {
	month = m_month;
}
void Date::setYear(int m_year) {
	year = m_year;
}

int Date::getDay() const {
	return day;
}
int Date::getMonth() const {
	return month;
}
int Date::getYear() const{
	return year;
}

void Date::printDate() const {
	std::cout << "\n\tThe date is: " << day << '.' << month << '.' << year << std::endl;
}

void Date::askDate() {
	do {
	std::cout << "Give day number: ";

	
		std::cin >> day;
	} while (day > 31 ||day < 1);

	do{
	std::cout << "Give month number: ";

	
		std::cin >> month;
	} while (month > 12 || month < 1);

	std::cout << "Give year: ";
	std::cin >> year;
	
}

Date::Date() { //Default constructor
	day = 1;
	month = 1;
	year = 1970;
	
}
Date::Date(int mDay, int mMonth, int mYear) : day(mDay), month(mMonth), year(mYear) {}; //Parametric constructor



void Date::addDate() {
	if (day < 31) {
		day++;
	}
	else {
		day = 1;
		if (month < 12) {
			month++;
		}
		else {
			month = 1;
			year++;
		}
	}

}

