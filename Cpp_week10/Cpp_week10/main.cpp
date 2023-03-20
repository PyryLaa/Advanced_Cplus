#include <iostream>
#include "Henkilo.h"

void something();

int main() {
	int a = 2;
	Person Matti;

	Matti.printData();

	if (a == 2) {
		Person Maija("Maija", 40);
		Maija.printData();
	}
	for (int i = 0; i < 2; i++){
		Person Irma("Irma", 30 + i);
		Irma.printData();
	}


	return 0;

}


void something() {
	Person Jussi("Jussi", 31);
	Jussi.printData();
}