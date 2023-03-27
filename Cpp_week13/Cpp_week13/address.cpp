#include <iostream>
#include "address.h"

Address::Address() {
	street = " ";
	postal_code = " ";
	town = " ";
}

Address::Address(std::string aStreet, std::string aPost, std::string aTown) 
	: street(aStreet), postal_code(aPost), town(aTown) {};

void Address::set_street(std::string aStreet) {
	street = aStreet;
}

void Address::set_post_code(std::string aPost) {
	postal_code = aPost;
}

void Address::set_town(std::string aTown) {
	town = aTown;
}

std::string Address::get_street() const {
	return street;

}
std::string Address::get_post_code() const {
	return postal_code;
}
std::string Address::get_town() const {
	return town;
}

void Address::print_address() const {
	std::cout << "\nAddress is: " << street << ", " << postal_code << ", " << town;
}