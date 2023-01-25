//This program tells the user which of the 4 numbers given is the smalles
//Does this by first calling with all numbers from main, then from the first function calling the second one with 3 and the last one with 2. Then returns the smallest from the first one called

#include <iostream>


int min1(int, int);
int min2(int, int, int);
int min3(int, int, int, int);

int main() {
	int a, b, c, d;
	char again;
	do {
		std::cout << "Give first number: ";
		std::cin >> a;
		std::cout << "Give second number: ";
		std::cin >> b;
		std::cout << "Give third number: ";
		std::cin >> c;
		std::cout << "Give fourth number: ";
		std::cin >> d;

		std::cout << "The smallest number is: " << min3(a, b, c, d);
		std::cout << "\nGo again? (Y||N): ";
		std::cin >> again;
	} while (again == 'Y' || again == 'y');
	return 0;

	
}

int min1(int x, int y) {
	int temp;

	if (x < y || x == y) {
		temp = x;
	}
	else if( x > y) {
		temp = y;
	}
	return temp;
}

int min2(int x, int y, int z) {

	int temp = min1(x, y);
	int compare;

	if (temp < z || temp == z) {
		compare = temp;
	}
	else if (temp > z) {
		compare = z;
	}
	return compare;
}

int min3(int x, int y, int z, int w) {
	int temp = min2(x, y, z);
	int compare;

	if (temp < w || temp == w) {
		compare = temp;
	}
	else if (temp > w) {
		compare = w;
	}
	return compare;
}