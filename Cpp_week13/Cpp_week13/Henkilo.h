#pragma once
#include <string>
#include "address.h"


class Person {
public:

	Person();
	Person(std::string, int);
	Person(std::string, int, Address);

	void setName(std::string m_Name);
	void setAge(int m_Name);
	void setAddress(Address);

	std::string getName() const;
	int getAge() const;
	Address getAddress();

	void printData() const;
private:
	std::string name;
	int age;
	Address home_address;
};
