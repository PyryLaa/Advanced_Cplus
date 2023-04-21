#include "Henkilo.h"
#include <iostream>

Person::Person() {
	name = " ";
	age = 0;
	std::cout << "Person class default constructor\n";
}

Person::~Person() {
	std::cout << "Person class destructor\n";
}





Person::Person(const std::string& aName, int aAge) : name(aName), age(aAge) {
	std::cout << "Person class 2-parameter constructor\n";
};

Person::Person(const std::string& aName, int aAge, const Address& aAddress) : name(aName), age(aAge), home_address(aAddress) {
	std::cout << "Person class 3-parameter constructor\n";
};




void Person::setName(const std::string& m_name) {
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





void Person::setAddress(const Address& aAddress) {
	home_address = aAddress;
}

Address Person::getAddress() const {
	return home_address;
}

void Person::addPerson() {
	std::string aName;
	int aAge;
	Address aAdd;

	std::cout << "Give persons name: ";
	std::cin.ignore();
	std::getline(std::cin, aName);
	name = aName;

	std::cout << "\nGive persons age: ";
	std::cin >> aAge;
	age = aAge;

	aAdd.askAddress();

	home_address = aAdd;
	
	Person::setAddress(aAdd);
	Person::setAge(aAge);
	Person::setName(aName);

}
