#include <iostream>

int main() {
	int a, *b_p;
	int* a_p = &a; //Integer type pointer to point to integer variable a
	
	*a_p = 7; //Set the value of a to 7 by using indirection operator * to the pointer variable a_p

	std::cout << "This is the memory address of variable a: " << a_p << "\n";
	std::cout << "This is the memory address of the pointer variable a_p: " << &a_p << "\n";
	std::cout << "This is the value of variable a fetched with indirection operator to a_p: " << * a_p << "\n";
	std::cout << "This is the value of variable a: " << a << "\n";
	std::cout << "This is a test that * and & operators undo each other, tested with a_p: " << *&a_p << "\n";
	std::cout << "This is the size of variable a in bytes: " << sizeof(a) << "\n";
	std::cout << "Thus is the size of pointer variable a_p in bytes: " << sizeof(a_p) << "\n";
	std::cout << "This is a test that * and & operators undo each other, tested with a: " << *&a << "\n";
	std::cout << "Ths is a test to reference the uninitialized pointer variable b_p: " << &b_p << "\n"; //Not working, throws an exception

	return 0;


}