#include <iostream>



int main() {
	
	int my_array[4] = { 1, 2, 3, 4 };
	int *array_p = my_array;

	std::cout << "This is the third value of the array: " << my_array[2] << "\n";
	std::cout << "This is the address of the array: " << my_array << "\n";
	std::cout << "This is also the address of the array with a pointer variable: " << array_p << "\n";
	std::cout << "This is the value of array_p + 2: " << array_p + 2 << "\n";
	std::cout << "This is the address of the 4th element of the array: " << &array_p[3] << "\n";
	std::cout << "This is the value of the first index in the array: " << *array_p << "\n";





	return 0;


}