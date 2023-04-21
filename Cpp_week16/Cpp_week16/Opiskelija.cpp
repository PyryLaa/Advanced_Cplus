#include <string>
#include <vector>
#include <iostream>
#include "Opiskelija.h"

Student::Student() {
	student_number = " ";
	std::cout << "Student class default constructor\n";
}

Student::Student(const std::string& aName, int aAge, const std::string& aNum, const Address& aAddress)
	:Person(aName, aAge, Address(aAddress)), student_number(aNum) {
	std::cout << "Student class 4-parameter constructor\n";
}

Student::~Student() {
	std::cout << "Student class destructor\n";
}

Student::Student(Student& aStud) {
	std::cout << "Student class copy constructor\n";
}

void Student::set_creds(int c) {
	screds = screds + c;
}

int Student::get_creds() const {
	return screds;
}

std::string Student::get_number() const {
	return student_number;
}

void Student::add_course(std::string& course) {
	passed_courses.push_back(course);
}

void Student::get_courses() const{
	for (std::string c : passed_courses) {
		std::cout << c << std::endl;
	}
}

void Student::print_data() const {
	std::cout << "Student's name: " << getName()<< std::endl;
	std::cout << "Student number: " << get_number() << std::endl;
	std::cout << "Student's age: " << getAge() << std::endl;
	getAddress().print_address();

	std::cout << "Student has passed these courses:\n";
	get_courses();

}