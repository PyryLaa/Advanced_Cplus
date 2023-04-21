#pragma once
#include <string>

class Address {
public:
	Address();
	Address(std::string, std::string, std::string);
	~Address();

	void set_street(std::string);
	void set_post_code(std::string);
	void set_town(std::string);

	std::string get_street() const;
	std::string get_post_code() const;
	std::string get_town() const;

	void print_address() const;

	void askAddress();

private:
	std::string street;
	std::string postal_code;
	std::string town;


};