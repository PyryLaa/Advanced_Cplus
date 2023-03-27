#include <iostream>
#include "dice.h"

int main() {
	Dice* dice = new Dice;

	char ans;
	

	

	dice->throwDice();

	dice->lastThrowValue();

	std::cout << "\nSum of the dice is: " << dice->getLastValue() << '\n';

	std::cout << "\nThrow again?(Y/N) ";
	std::cin >> ans;
	dice->setDice();

	while (ans == 'Y' || ans == 'y') {
		dice->throwDice();
		dice->lastThrowValue();
		if (dice->getDice() > 1) {
			std::cout << "\nSum of the dice is: " << dice->getLastValue() << '\n';
		}
		std::cout << "\nThrow again?(Y/N) ";
		std::cin >> ans;
		if (ans == 'Y' || ans == 'y') { //If the user wants to go again, ask for the amount of dice
			dice->setDice();
		}
	}
	delete dice;
	return 0;
}