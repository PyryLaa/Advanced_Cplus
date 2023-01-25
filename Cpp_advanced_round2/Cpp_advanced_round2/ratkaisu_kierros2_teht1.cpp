//This program checks if it is possible to form a triangle with the three sides given by the user

#include <iostream>
#include <cmath>

enum triangles {
	equilateral = 0,
	scalene = 2,
	isosceles = 4,
	right_angled = 6
};


bool is_valid(double, double, double, triangles&);



int main() {
	double meas1, meas2, meas3;
	triangles type;
	
	std::cout << "This program checks if it is possible to form a triangle with the measurements given by you. Please give integers\n";

	std::cout << "Give first measure: ";
	std::cin >> meas1;
	std::cout << "Give second measure: ";
	std::cin >> meas2;
	std::cout << "Give third measure: ";
	std::cin >> meas3;

	bool validity = is_valid(meas1, meas2, meas3, type);

	if (validity == true) {
		std::string triangle;
		
		std::cout << "It is possible to form a triangle with these values.";
		
		if (type == 0) {
			triangle = "equilateral";
		}
		else if (type == 2) {
			triangle = "scalene";
		}
		else if (type == 4) {
			triangle = "isosceles";
		}
		else if (type == 6) {
			triangle = "right angled";
		}
		std::cout << "\nThe type of the triangle is: " << triangle;
	}
	else {
		std::cout << "It is not possible to form a triangle with these values.";
	}
	return 0;
}

bool is_valid(double a, double b, double c, triangles &type ) {
	bool valid = false;
	
	if ((a + b) < c || (a + c) < b || (b + c) < a) {
		valid = false;
	}
	else {
		valid = true;
	}
	if (a == b && b == c) {
		type = equilateral;
	}
	else if (a == b || a == c || b == c) {
		type = isosceles;
	}
	else if (a == (sqrt(pow(b, 2) + pow(c, 2))) || b == (sqrt(pow(a, 2) + pow(c, 2))) || c == (sqrt(pow(a, 2) + pow(b, 2)))) {
		type = right_angled;
	}
	else if (a != b && a != c && b != c) {
		type = scalene;
	}
	return valid;
}
