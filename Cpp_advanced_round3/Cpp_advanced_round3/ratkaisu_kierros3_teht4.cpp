//This program asks the user for two times and counts their difference


#include <iostream>

struct Time_ty {
	int hrs = 0,
		mins = 0,
		secs = 0;
};

void time_converter(int&, int&, int&, int&);
void sec_converter(int&, Time_ty*);

int main() {
	Time_ty times_a, times_b, *time_remain = &times_a;
	int seconds_a, seconds_b, seconds_remain;

	std::cout << "Give 2 times and this program will count their difference.";

	std::cout << "\nFirst hours: ";
	std::cin >> times_a.hrs;
	std::cout << "\nFirst minutes: ";
	std::cin >> times_a.mins;
	std::cout << "\nFirst seconds: ";
	std::cin >> times_a.secs;

	std::cout << "\nSecond hours: ";
	std::cin >> times_b.hrs;
	std::cout << "\nSecond minutes: ";
	std::cin >> times_b.mins;
	std::cout << "\nSecond seconds: ";
	std::cin >> times_b.secs;

	time_converter(times_a.hrs, times_a.mins, times_a.secs, seconds_a);
	time_converter(times_b.hrs, times_b.mins, times_b.secs, seconds_b);

	if (seconds_a >= seconds_b) {
		seconds_remain = seconds_a - seconds_b;
	}
	else if (seconds_b > seconds_a) {
		seconds_remain = seconds_b - seconds_a;
	}


	sec_converter(seconds_remain, time_remain);

	std::cout << "The difference between those two times is " << (*time_remain).hrs << " hours, " << (*time_remain).mins << " minutes, " << (*time_remain).secs << " seconds.";
	return 0;

}


void sec_converter(int& s, Time_ty*p) {
	(*p).hrs = s / 3600;
	(*p).mins = (s % 3600) / 60;
	(*p).secs = ((s % 3600) % 60);

}



void time_converter(int& h, int& m, int& s, int& sec) {
	sec = (h * 3600) + (m * 60) + s;
	
}