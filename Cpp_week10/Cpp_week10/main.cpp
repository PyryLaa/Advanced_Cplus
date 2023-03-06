#include <iostream>
#include "Henkilo.h"



int main() {
	Person pekka;

	pekka.setName("Pekka");
	pekka.setAge(20);

	Person maija;
	
	maija.setName("Maija");
	maija.setAge(25);

	std::cout << "Name: " << pekka.getName() << '\t' << "Age: " << pekka.getAge() << '\n';
	std::cout << "Name: " << maija.getName() << '\t' << "Age: " << maija.getAge() << '\n';


	pekka.printData();
	maija.printData();

	return 0;

}