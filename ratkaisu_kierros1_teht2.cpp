//Source code for swap-function that takes 2 integers as a parameter and swaps their places
//2 different functios doing the swap, first does by reference and second does with pointers

#include <iostream>


int swap1(int &a_r,int &b_r); //a_r and b_r are reference variables to the values passed to the function
int swap2(int *c_p, int *d_p); //c_p and d_p are pointer variables to the variables passed to the function

int main() {
	int a, b, c, d;

	std::cout << "This program asks the user for 4 integers and swaps their place.\n";

	std::cout << "Give the first number: ";
	std::cin >> a;
	std::cout << "\nGive the second number: ";
	std::cin >> b;
	std::cout << "\nGive the third number: ";
	std::cin >> c;
	std::cout << "\nGive the fourth number: ";
	std::cin >> d;


	std::cout << "First number: " << a << " before swap1\n" << "Second number: " << b << " before swap1\n";

	swap1(a, b);
	
	std::cout << "First number: " << a << " after swap1\n" << "Second number: " << b << " after swap1\n";
	
	std::cout << "\nThird number: " << c << " before swap2\n" << "Fourth number: " << d << " before swap2\n";

	swap2(&c, &d);

	std::cout << "Third number: " << c << " after swap2\n" << "Fourth number: " << d << " after swap2\n";
	return 0;

}

int swap1(int& a_r, int& b_r) { //Swaps the numbers passed to the function. Numbers are passed as their original variables but handled as references in the function
	int temp;
	temp = a_r;
	a_r = b_r;
	b_r = temp;

	return a_r, b_r;

}

int swap2(int* c_p, int* d_p) { //Swaps the numbers passed to the function as pointers to the original variables and returns the changed values as pointers
	int temp;
	temp = *c_p;
	*c_p = *d_p;
	*d_p = temp;

	return *c_p, *d_p;
}