#include <iostream>
#include "Paivays.h"


int main() {
	Date tanaan, huomenna;

	tanaan.printDate();
	huomenna.printDate();

	std::cout << "\nGive today's date\n";
	tanaan.askDate();

	std::cout << "\nGive tomorrow's date\n";
	huomenna.askDate();

	tanaan.printDate();
	huomenna.printDate();

	return 0;
}