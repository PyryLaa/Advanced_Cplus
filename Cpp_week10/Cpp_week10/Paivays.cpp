#include <iostream>
#include <string>
#include "Paivays.h"

void Date::setDay(int m_day) {
	day = m_day;
}
void Date::setMonth(int m_month) {
	month = m_month;
}
void Date::setYear(int m_year) {
	year = m_year;
}

int Date::getDay() {
	return day;
}
int Date::getMonth() {
	return month;
}
int Date::getYear() {
	return year;
}

void Date::printDate() {
	std::cout << "The date is: " << day << '.' << month << '.' << year << std::endl;
}

void Date::askDate() {
	
	std::cout << "Give day number: ";
	std::cin >> day;
	std::cout << "Give month number: ";
	std::cin >> month;
	std::cout << "Give year: ";
	std::cin >> year;
	
	
	
}

Date::Date() { //Default constructor
	day = 1;
	month = 1;
	year = 1970;
	
}
Date::Date(int mDay, int mMonth, int mYear) : day(mDay), month(mMonth), year(mYear) {}; //Parametric constructor

Date::~Date() {
	std::cout << "Date destructor" << '\n';
};

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

