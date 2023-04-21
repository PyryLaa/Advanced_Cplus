#pragma once
#include <string>
#include <vector>
#include "address.h"
#include "Henkilo.h"

class Student : public Person {
public:
	Student();
	Student(const std::string& aName, int aAge, const std::string& aNum, const Address& aAddress);
	~Student();
	Student(Student& aStud);

	void set_creds(int);
	int get_creds() const;
	void add_course(std::string& aCourse);
	void get_courses() const;
	std::string get_number() const;

	void print_data() const;

private:
	int screds = 0; 
	std::string student_number;
	std::vector<std::string> passed_courses;

};