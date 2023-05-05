#pragma once
#include <string>
#include "address.h"


class Person {
public:

	Person();
	~Person();
	Person(const std::string&, int);
	Person(const std::string&, int, const Address&);

	void setName(const std::string& m_Name);
	void setAge(int m_Name);
	void setAddress(const Address&);

	std::string getName() const;
	int getAge() const;
	Address getAddress() const;

	virtual void printData() const;

	void addPerson();

private:
	Address home_address;
protected:
	std::string name;
	int age;
};
