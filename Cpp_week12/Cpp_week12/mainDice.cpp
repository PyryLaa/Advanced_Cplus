#include <iostream>
#include "dice.h"

int main() {
	Dice dice;

	char ans;
	

	

	dice.throwDice();

	dice.lastThrowValue();

	std::cout << "Sum of the dice is: " << dice.getLastValue();

	std::cout << "\nThrow again?(Y/N) ";
	std::cin >> ans;
	dice.setDice();

	while (ans == 'Y' || ans == 'y') {
		dice.throwDice();
		dice.lastThrowValue();
		std::cout << "Sum of the dice is: " << dice.getLastValue();
		std::cout << "\nThrow again?(Y/N) ";
		std::cin >> ans;
		if (ans == 'Y' || ans == 'y') { //If the user wants to go again, ask for the amount of dice
			dice.setDice();
		}
		
		
	}

	return 0;
}