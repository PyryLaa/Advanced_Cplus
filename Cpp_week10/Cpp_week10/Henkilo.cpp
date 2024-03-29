#include "Henkilo.h"
#include <iostream>


void Person::setName(std::string m_name) {
	name = m_name;
};

void Person::setAge(int m_age) {
	age = m_age;
}

std::string Person::getName() {
	return name;
}

int Person::getAge() {
	return age;
}

void Person::printData() {
	std::cout << "\nPerson's information:";
	std::cout << "\nName: " << name;
	std::cout << "\nAge: " << age;
}

Person::Person() {
	name = "Matti";
	age = 20;
}

Person::Person(std::string aName, int aAge) : name(aName), age(aAge) {};

Person::~Person() {
	std::cout << "Person deconstructor";
}