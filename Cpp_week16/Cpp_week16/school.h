#pragma once
#include <string>
#include <vector>
#include "Opettaja.h"
#include "Opiskelija.h"
#include "address.h"

class School {
public:
	School();
	School(const std::string& aName, const Address& aAddress);

	void setName(const std::string& aName);
	void setAddress(const Address& aAddress);

	std::string getName() const;
	Address getAddress() const;

	void addStudent(const std::string& aName,int aAge, const std::string& aNum, const Address& aAddress);
	void addTeacher(const std::string& aName, int aAge, const Address& aAddress, const std::string& aSubject);

	void printData() const;
	void printTeachers() const;
	void printStudents() const;

	void deleteStudent(const std::string& aName);
	void deleteTeacher(const std::string& aName);

private:
	std::string name;
	Address address;
	std::vector<Teacher*> teachers;
	std::vector<Student*> students;

};
