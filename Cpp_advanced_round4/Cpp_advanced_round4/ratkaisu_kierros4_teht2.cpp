//Here we will read data from a file and count the sum of the numbers there, the amount of numbers and the average

#include <iostream>
#include <fstream>
#include <string>

int main() {
	
	std::ifstream infile; //Define ifstream object as infile named variable
	
	float sum = 0, amount = 0, average;
	std::string fname = "Random.txt";
	std::string line;

	infile.open(fname, std::ios::in); //std::ios::in will define the file as read only

	if (infile) {
		while (getline(infile, line)) { //getline will read every line from the file as string 
			sum = std::stoi(line) + sum; //here we convert the line variable which is string type to int type so we can do arithmetics with it.
			amount++; //amount is the counter for lines in the file
		}
		average = sum / amount;

		std::cout << "The amount of numbers in the file is: " << amount << "\nThe sum of the numbers is: " << sum << "\nAnd the average is: " << average;

	}

	infile.close();
	return 0;

}