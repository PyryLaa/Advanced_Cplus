#include <iostream>
#include "Henkilo.h"
#include "address.h"



int main() {
	setlocale(LC_ALL, "fi_FI");
	
	
	
	Person Matti("Matti", 20, Address("Hämeenkatu 20", "33230", "Tampere"));

	Matti.printData();

	


	return 0;

}


