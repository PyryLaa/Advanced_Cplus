//Program asks the user for an integer and tells if it is a prime or not
#include <iostream>



bool is_prime(int);
void prime_between();
bool is_prime_half(int);
bool is_prime_root(int);

int main() {
	int a;
	char choice;
	do {
		std::cout << "Give an integer, and this program will tell you if it is a prime or not: ";
		std::cin >> a;

		if (is_prime(a)) {
			std::cout << "\nThe number " << a << " is a prime number.";
		}
		else {
			std::cout << "\nThe number " << a << " is not a prime number.";
		}
		std::cout << "\nDo you want to go again? (Y/N): ";
		std::cin >> choice;
	} while (choice == 'Y' || choice == 'y');
	prime_between();
	return 0;
}

bool is_prime(int num) {
	if (num == 0 || num == 1) {
		return false;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}

	}
	return true;
}

void prime_between() {
	std::cout << "\nNow the program will print primes between 1-10000 and the precentage of the primes.";

	int b = 10000;
	float c = 0;

	for (int i = 1; i <= b; i++) {
		if (is_prime(i)) {
			std::cout << i << ' ';
			c++;
		}
	}
	std::cout << "\nThe precentage of primes from all of the numbers is: " << ((c / b) * 100) << "% and the total amount of them is: " << c;
	c = 0;
	for (int i = 1; i <= b; i++) {
		if (is_prime_half(i)) {
			c++;
		}
	}
	std::cout << "\nHere is the precentage and amount when the testing is for n-1: " << (c / b) * 100 << "%, amount of numbers: " << c;
	c = 0;
	for (int i = 1; i <= b; i++) {
		if (is_prime_root(i)) {
			c++;
		}
	}
	std::cout << "\nHere is the precentage and amount when the testing is for sqrt(n): " << (c / b) * 100 << "%, amount of numbers: " << c;
	c = 0;
}

bool is_prime_half(int num) {
	if (num == 0 || num == 1) {
		return false;
	}
	for (int i = 2; i <= num/2; i++) {
		if (num % i == 0) {
			return false;
		}

	}
	return true;
}
bool is_prime_root(int num) {
	if (num == 0 || num == 1) {
		return false;
	}
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}

	}
	return true;
}