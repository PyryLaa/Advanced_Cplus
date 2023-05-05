#include <iostream>
#include <vector>
#include <string>
#include "school.h"
#include "Opettaja.h"
#include "Opiskelija.h"

int main() {

	School* tamk = new School("TAMK", Address("Kuntokatu 3", "33520", "Tampere"));
	tamk->addStudent("Petteri", 20, "220440030", Address("Kuikkakuja 20", "33600", "Tampere"));
	tamk->addStudent("Maija", 20, "2203040010", Address("Tumppi 3", "33720", "Tampere"));

	tamk->addTeacher("Mikko", 40, Address("Porttikatu 30", "33100", "Tampere"), "Ohjelmistokehitys");
	tamk->addTeacher("Tiina", 37, Address("Kauppakuja 20", "37120", "Nokia"), "Matematiikka");

	tamk->printData();
	tamk->printStudents();
	tamk->printTeachers();

	tamk->deleteStudent("Petteri");
	tamk->deleteTeacher("Mikko");

	tamk->printStudents();
	tamk->printTeachers();

	delete tamk;

	return 0;

}