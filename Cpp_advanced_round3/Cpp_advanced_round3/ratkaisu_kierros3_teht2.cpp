//This program will change the given time in h:m:s to seconds

#include <iostream>

void time_converter(int&, int&, int&, int&);

int main() {
	int seconds, hrs, mins, secs;

	std::cout << "This program will ask you for a time in h:m:s format and convert it to seconds.";
	std::cout << "\nHours: ";
	std::cin >> hrs;
	std::cout << "\nMinutes: ";
	std::cin >> mins;
	std::cout << "\nSeconds: ";
	std::cin >> secs;

	time_converter(hrs, mins, secs, seconds);

	std::cout <<'\n' << hrs << " hours, " << mins << " minutes and " << secs << " seconds is " << seconds << " seconds.";
	return 0;
}

void time_converter(int& h, int& m, int& s, int& sec) {
	sec = (h * 3600) + (m * 60) + s;
}