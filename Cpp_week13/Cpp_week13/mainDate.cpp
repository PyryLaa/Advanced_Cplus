#include <iostream>
#include "calendar.h"


int main() {
	setlocale(LC_ALL, "fi_FI");
	CalendarEvent* event1 = new CalendarEvent();

	std::cout << "Printing event with default info\n";
	event1->print_event();

	
	event1->ask_event(); //Ask the user for event info
	event1->print_event();//Print the event info for the user

	delete event1;
	

	return 0;
}