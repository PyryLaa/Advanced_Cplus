#pragma once
#include <string>
#include <vector>
#include "address.h"
#include "Henkilo.h"

class Teacher : public Person {
public:
	Teacher();
	Teacher(Teacher& aTeacher);
	Teacher(const std::string& aName, int aAge, const Address& aAddress, const std::string& aSubject);
	~Teacher();

	void set_subject(const std::string& aSubject);
	std::string get_subject() const;
	void add_course(const std::string& aCourse);
	void delete_course(const std::string& aCourse);
	void print_data() const;


private:
	std::string subject;
	std::vector<std::string> courses;

};