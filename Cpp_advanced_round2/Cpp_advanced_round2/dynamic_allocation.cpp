#include <iostream>

int main() {
	const int ARRAY_SIZE = 123;
	double* arr_ptr = nullptr;
	arr_ptr = new double[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++) {
		*(arr_ptr + i) = i * i;

	}
	for (int i = 0; i < ARRAY_SIZE; i++) {
		std::cout << arr_ptr[i] << ' ';
	}

	delete[] arr_ptr;
	arr_ptr = nullptr;


	return 0;
}