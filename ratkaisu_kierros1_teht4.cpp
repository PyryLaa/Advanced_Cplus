//This program reverses an array with pointers

#include <iostream>

void reverse(int* arr_p, int* arr_end_p, int size);
void swap(int* a_p, int* b_p);

int main() {
	const int ARRAY_SIZE = 10;
	int my_array[ARRAY_SIZE];

	int* array_ptr = my_array; //Pointer to the beginning of the array
	int* array_end_ptr = my_array + ARRAY_SIZE - 1;//Pointer to the end of the array
	
	std::cout << "This is the original array: ";
	
	for (int i = 0; i < ARRAY_SIZE; i++) { //Initialize the array with number 1 to 10
		my_array[i] = i + 1;
		std::cout << my_array[i] << ' ';
	}
	reverse(array_ptr, array_end_ptr, ARRAY_SIZE);

	std::cout << "\nThis is the reversed array: ";

	for (int i = 0; i < ARRAY_SIZE; i++) {
		std::cout << my_array[i] << ' ';
	}


	return 0;
}

void swap(int* c_p, int* d_p) {//Swaps the values around
	int temp;
	temp = *c_p;
	*c_p = *d_p;
	*d_p = temp;


}

void reverse(int* arr_p, int* arr_end_p, int size) { //This function checks if the value at arr_p is smaller than at arr_end_p, if yes then pass them to swap
	

	while (arr_p < arr_end_p) {
		swap(arr_p, arr_end_p);
		arr_p++;
		arr_end_p--;

	}
}