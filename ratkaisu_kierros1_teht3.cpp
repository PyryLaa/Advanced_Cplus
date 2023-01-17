//This program increases the value of each member of the array passed to the function by 1
#include <iostream>

void array_increase1(int numbers[], int size);
void array_increment_pointer(int *a_p, int size);

int main() {
	const int ARRAY_SIZE = 10;
	int num_array[ARRAY_SIZE];
	int* arr_p;

	for (int i = 0; i < ARRAY_SIZE; i++) { //Initialize the array with each element as 0
		num_array[i] = 0;
	}
	std::cout << "This is the array before incrementing: ";

	for (int j = 0; j < ARRAY_SIZE; j++) { 
		
		std::cout << num_array[j] << ' ';
	}
	array_increase1(num_array, ARRAY_SIZE); //Pass the array to the function that increments each value by 1

	arr_p = num_array;

	array_increment_pointer(arr_p, ARRAY_SIZE);

	



	return 0;
}

void array_increase1(int numbers[], int size) {
	std::cout << "\nThis is the array incremented by 1 with a for loop, no pointers: ";

	for (int i = 0; i < size; i++) {
		numbers[i] = numbers[i] +1;
		std::cout << numbers[i] << ' ';
		
	}
	
}

void array_increment_pointer(int* a_p, int size) {
	std::cout << "\nThis is the array after incrementing each element by 1, array passed by pointer to the function: ";

	for (int i = 0; i < size; i++) {
		std::cout << *a_p << ' ';
		a_p++;
	}

}
