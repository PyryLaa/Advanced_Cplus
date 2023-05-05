#include <string>
#include <iostream>
#include <vector>
#include "school.h"

School::School() {
	name = " ";
}

School::School(const std::string& aName, const Address& aAddress) : name(aName), address(aAddress) {};

void School::setName(const std::string& aName) {
	name = aName;
}

void School::setAddress(const Address& aAddress) {
	address = aAddress;
}

Address School::getAddress() const {
	return address;
}

std::string School::getName() const {
	return name;
}

void School::addStudent(const std::string& aName, int aAge, const std::string& aNum, const Address& aAddress) {
	Student* student = new Student(aName, aAge, aNum, aAddress);
	students.push_back(student);
}

void School::addTeacher(const std::string& aName, int aAge, const Address& aAddress, const std::string& aSubject) {
	Teacher* teacher = new Teacher(aName, aAge, aAddress, aSubject);
	teachers.push_back(teacher);
}

void School::printData() const{
	std::cout << "School's name: " << name << '\n';
	getAddress().print_address();
	std::cout << "School's teachers: \n";
	for (Teacher* t : teachers) {
		t->printData();
	}
	std::cout << "School's students: \n";
	for (Student* s : students) {
		s->printData();
		
	}
}

void School::printStudents() const {
	std::cout << "School's students: \n";
	for (Student* s : students) {
		s->printData();
	}
}

void School::printTeachers() const {
	for (Teacher* t : teachers) {
		t->printData();
	}
}

void School::deleteStudent(const std::string& aName) {
	int i = 0;
	for (Student* s : students) {
		if (s->getName() == aName) {
			delete s;
			students.erase(students.begin() + i);

		}
		i++;
	}
}

void School::deleteTeacher(const std::string& aName) {
	int i = 0;
	for (Teacher* t : teachers) {
		if (t->getName() == aName) {
			delete t;
			teachers.erase(teachers.begin() + i);

		}
		i++;
	}
}