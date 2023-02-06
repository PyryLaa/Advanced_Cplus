#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::ofstream outFile;
	outFile.open ("C_html.html");

	std::string name, desc;


	std::cout << "Please write your first and last name: ";
	std::getline(std::cin, name);
	std::cout << "Please describe yourself shortly: ";
	std::getline(std::cin, desc);

	outFile << "<!DOCTYPE html>\n<html lang =" <<'"' << "en" << '"' << " >\n" << "<head>\n" << "\t<meta charset =" << '"' <<  "UTF - 8" << '"' << ">\n"
		<< "\t<meta http - equiv =" << '"' << "X - UA - Compatible" <<'"' << "content=" << '"' << "IE = edge" << '"' << ">\n" <<
		"\t<meta name="<<'"' << "viewport" << '"' << "content=" << '"' << "width = device - width, initial - scale = 1.0" << '"' << ">\n" <<
		"<title>Document </title>\n" << "</head>\n" << "<body>\n" << "\t<h1>" << name << "</h1>\n" << "\t<p>" << desc << "</p>\n" << "</body>\n" << "</html>";
	return 0;
}