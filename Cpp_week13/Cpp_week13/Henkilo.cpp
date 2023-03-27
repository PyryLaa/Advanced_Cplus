#include "Henkilo.h"
#include <iostream>


void Person::setName(std::string m_name) {
	name = m_name;
};

void Person::setAge(int m_age) {
	age = m_age;
}

std::string Person::getName() const {
	return name;
}

int Person::getAge() const {
	return age;
}

void Person::printData() const {
	std::cout << "\nPerson's information:";
	std::cout << "\nName: " << name;
	std::cout << "\nAge: " << age;

	home_address.print_address();
}

Person::Person() : name(" "), age(0), home_address() {};

Person::Person(std::string aName, int aAge) : name(aName), age(aAge) {};

Person::Person(std::string aName, int aAge, Address aAddress) : name(aName), age(aAge), home_address(aAddress) {};

void Person::setAddress(Address aAddress) {
	home_address = aAddress;
}

Address Person::getAddress() {
	return home_address;
}