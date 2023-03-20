#pragma once
#include <string>


class Person {
public:

	Person();
	Person(std::string, int);
	~Person();

	void setName(std::string m_Name);
	void setAge(int m_Name);

	std::string getName();
	int getAge();

	void printData();
private:
	std::string name;
	int age;
};
