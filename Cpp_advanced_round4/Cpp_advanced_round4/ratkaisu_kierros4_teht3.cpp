//Program asks the user for name and a short description, then creates a html file with the users name as header and description as a paragraph

#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::ofstream outFile; //Define the ofstream as outFile named variable
	outFile.open ("C_html.html"); //Create or open the file

	std::string name, desc;


	std::cout << "Please write your first and last name: ";
	std::getline(std::cin, name); //Asking for strings so use getline
	std::cout << "Please describe yourself shortly: ";
	std::getline(std::cin, desc);

	outFile << "<!DOCTYPE html>\n<html lang =" <<'"' << "en" << '"' << " >\n" << "<head>\n" << "\t<meta charset =" << '"' <<  "UTF - 8" << '"' << ">\n"
		<< "\t<meta http - equiv =" << '"' << "X - UA - Compatible" <<'"' << "content=" << '"' << "IE = edge" << '"' << ">\n" <<
		"\t<meta name="<<'"' << "viewport" << '"' << "content=" << '"' << "width = device - width, initial - scale = 1.0" << '"' << ">\n" <<
		"<title>Document </title>\n" << "</head>\n" << "<body>\n" << "\t<h1>" << name << "</h1>\n" << "\t<p>" << desc << "</p>\n" << "</body>\n" << "</html>";
	return 0;
}