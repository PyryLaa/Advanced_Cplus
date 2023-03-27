#include <iostream>
#include "calendar.h"

CalendarEvent::CalendarEvent() : event(" "), date(), reminder(false) {};

CalendarEvent::CalendarEvent(std::string aEvent, Date aDate, bool aReminder) : event(aEvent), date(aDate), reminder(aReminder) {};

void CalendarEvent::set_event(std::string aEvent) {
	event = aEvent;
}

void CalendarEvent::set_date(Date aDate) {
	date = aDate;
}

void CalendarEvent::set_reminder(bool aReminder) {
	reminder = aReminder;
}

std::string CalendarEvent::get_event() const {
	return event;
}

Date CalendarEvent::get_date() const{
	return date;
}

bool CalendarEvent::get_reminder() const {
	return reminder;
}

void CalendarEvent::print_event() const {
	std::cout << "\nEvent info:\n" <<
		"\tEvent name: " << event;
	date.printDate();

	std::string rem;

	if (reminder) {
		rem = "on";
	}
	else if (!reminder) {
		rem = "off";
	}
	std::cout << "\tReminder: " << rem << '\n';
}

void CalendarEvent::ask_event() {
	unsigned char rem;

	std::cout << "Give event name: ";
	std::cin >> event;
	date.askDate();
	std::cout << "Do you want a reminder?(Y/N)";
	std::cin >> rem;

	if (rem == 'Y' || rem == 'y') {
		reminder = true;
	}
	else {
		reminder = false;
	}
}