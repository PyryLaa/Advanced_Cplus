//This program will tell you the time in h:m:s format when given the amount of seconds

#include <iostream>

struct Clock {
	int sec = 0;
	int min = 0;
	int hour = 0;
} time_unit;

void sec_convert(int);

int main() {
	int seconds;

	std::cout << "This program will convert the given amount of second to hours, minutes and seconds." << "\nGive the amount of seconds to be converted: ";
	std::cin >> seconds;

	sec_convert(seconds);

	std::cout << seconds << " seconds is " << time_unit.hour << " hours, " << time_unit.min << " minutes, " << time_unit.sec << " seconds.";
}

void sec_convert(int s) {
	time_unit.hour = s / 3600;
	time_unit.min = (s % 3600) / 60;
	time_unit.sec = ((s % 3600) % 60);
	
}
