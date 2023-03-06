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

Date::Date() { //Constructor
	std::cout << "Give day number: ";
	std::cin >> day;
	std::cout << "\nGive month number: ";
	std::cin >> month;
	std::cout << "\nGive year: ";
	std::cin >> year;
	
}