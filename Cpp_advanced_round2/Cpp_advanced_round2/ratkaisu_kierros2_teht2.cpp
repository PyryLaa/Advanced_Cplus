//Program asks user for a real number and tells the user that which are the two integers that the given numbers falls between

#include <iostream>
#include <math.h>

int main() {
	double a;
	char again;

	do {
		std::cout << "Give a real number (eg. 1.5 2.76): ";
		std::cin >> a;

		std::cout << "Your number is between [" << floor(a) << " and " << ceil(a) << ']';
		std::cout << "\nWant to go again?(Y|N)";
		std::cin >> again;
	} while (again == 'y' || again == 'Y');

	return 0;
}