#include <iostream>

struct Time_ty {
	int hrs = 0,
		mins = 0,
		secs = 0;
};

int main() {
	Time_ty times;

	Time_ty* times_ptr = &times;

	std::cout << "Give hours: ";
	std::cin >> times.hrs;

	while (times.hrs < 0 || times.hrs > 23) {
		std::cout << "Invalid amount of hours, please give hours between 0 and 23: ";
		std::cin >> times.hrs;
	}
	std::cout << "Give minutes: ";
	std::cin >> times.mins;

	while (times.mins < 0 || times.mins > 59) {
		std::cout << "Invalid amount of minutes, please give minutes between 0 and 59: ";
		std::cin >> times.mins;
	}

	std::cout << "Give seconds: ";
	std::cin >> times.secs;

	while (times.secs < 0 || times.secs > 59) {
		std::cout << "Invalid amount of seconds, please give seconds between 0 and 59: ";
		std::cin >> times.secs;
	}

	std::cout << "The time is: " << times.hrs << ':' << times.mins << ':' << times.secs; //This is done with printing straight from the struct

	std::cout << "\nThe time printed with pointer is: " << (*times_ptr).hrs << ':' << (*times_ptr).mins << ':' << (*times_ptr).secs;

	Time_ty* times_ptr_b = &times, * times_ptr_c;

	(*times_ptr_b).hrs = 2;
	(*times_ptr_b).mins = 30;
	(*times_ptr_b).secs = 40;

	times_ptr_c = times_ptr_b;

	if ((*times_ptr_b).hrs == (*times_ptr_c).hrs && (*times_ptr_b).mins == (*times_ptr_c).mins && (*times_ptr_b).secs == (*times_ptr_c).secs) {
		std::cout << "\nPointer b and pointer c have the same content.";
	}
	else {
		std::cout << "Pointer b and pointer c do not have the same content.";
	}
	return 0;
}