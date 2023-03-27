#pragma once
#include <string>
#include "Date.h"

class CalendarEvent {

public:
	CalendarEvent();
	CalendarEvent(std::string, Date, bool);

	void set_event(std::string);
	void set_date(Date);
	void set_reminder(bool);

	std::string get_event() const;
	Date get_date() const;
	bool get_reminder() const;

	void print_event() const;
	void ask_event();

private:
	std::string event;
	Date date;
	bool reminder;
};