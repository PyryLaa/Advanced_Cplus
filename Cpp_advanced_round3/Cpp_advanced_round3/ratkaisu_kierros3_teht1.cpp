//This program will tell you the time in h:m:s format when given the amount of seconds

#include <iostream>

void sec_convert(int, int&,int&, int&);

int main() {
	int sec;
	int hours, minutes, seconds;

	std::cout << "This program will convert the given amount of second to hours, minutes and seconds." << "\nGive the amount of seconds to be converted: ";
	std::cin >> sec;

	sec_convert(sec, hours, minutes,  seconds);

	std::cout << sec << " seconds is " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds.";
}

void sec_convert(int s, int& hrs, int& mins, int& secs) {
	hrs = s / 3600;
	mins = (s % 3600) / 60;
	secs = ((s % 3600) % 60);
	
}
