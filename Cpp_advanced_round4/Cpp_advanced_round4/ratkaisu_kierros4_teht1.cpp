#include <iostream>


//Here I will test what is the max size of char array in dynamic and local arrays



int main() {
	//char local[1000000] = {}; //This is the maximum size of a local array
	char* ptr_arr = new char[1000000000]; //This is around the max size of a dynamic array reserved with a pointer
	
}