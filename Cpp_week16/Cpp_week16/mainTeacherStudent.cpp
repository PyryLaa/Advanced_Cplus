#include <iostream>
#include <string>
#include <vector>
#include "Henkilo.h"
#include "Opettaja.h"
#include "address.h"
#include "Opiskelija.h"



int main() {
	int i = 0;
	std::vector<Person*> School;

	std::cout << "Creating teachers and adding them to the school vector\n";
	Teacher* Pekka = new Teacher("Pekka", 35, Address("Kauppakuja 32", "33420", "Tampere"), "Ohjelmistotekniikka");
	School.push_back(Pekka);
	Teacher* Maija = new Teacher("Maija", 42, Address("Rinnetie 50", "33710", "Tampere"), "Matematiikka");
	School.push_back(Maija);
	Teacher* Matti = new Teacher("Matti", 30, Address("Vihtatie 30", "33120", "Tampere"), "Elektroniikka");
	School.push_back(Matti);

	std::cout << "Creating students and adding them to the school vector\n";
	Student* Juuso = new Student("Juuso", 15, "22203313", Address("Lampitie 10", "33800", "Tampere"));
	School.push_back(Juuso);
	Student* Jenni = new Student("Jenni", 16, "00300220", Address("Kimppukuja 2", "37180", "Nokia"));
	School.push_back(Jenni);
	Student* Kimmo = new Student("Kimmo", 15, "22001050", Address("Kukkatie 4", "33200", "Tampere"));
	School.push_back(Kimmo);

	for (Person* p : School) {
		p->printData();
	}

	

	return 0;
}