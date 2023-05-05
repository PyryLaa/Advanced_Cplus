#include <string>
#include <vector>
#include <iostream>
#include "Opettaja.h"

Teacher::Teacher() {
	subject = " ";
	std::cout << "Teacher class default constructor\n";
}

Teacher::Teacher(const std::string& aName, int aAge, const Address& aAddress, const std::string& aSubject)
	: Person(aName, aAge, aAddress), subject(aSubject){
	std::cout << "Teacher class 4-parameter constructor\n";
}

Teacher::Teacher(Teacher& aTeacher) {
	std::cout << "Teacher class copy constructor\n";
}

Teacher::~Teacher() {
	
	std::cout << "Teacher class destructor\n";
}



void Teacher::set_subject(const std::string& aSubject) {
	subject = aSubject;
}

std::string Teacher::get_subject() const {
	return subject;
}

void Teacher::add_course(const std::string& aCourse) {
	courses.push_back(aCourse);
}

void Teacher::delete_course(const std::string& aCourse) {
	int i = 0;
	for (std::string c : courses) {
		if (aCourse == c)
			courses.erase(courses.begin() + i);
	}
	i++;
}

void Teacher::printData() const {
	Person::printData();
	//getAddress().print_address();
	std::cout << "\nTeachers subject is: " << get_subject() << std::endl;
	if (courses.size() > 0) {
		std::cout << "Teacher is teaching these courses: ";
		for (std::string s : courses) {
			std::cout << s << std::endl;
		}
	}
	else {
		std::cout << "Teacher is not currently teaching any courses";
	}

}