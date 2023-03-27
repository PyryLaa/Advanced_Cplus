#include <iostream>
#include "dice.h"


Dice::Dice() { //Default amount of dice
	amount = 1;
	
}

Dice::Dice(int a) { 
	amount = a;
}

int Dice::getLastValue() {//Returns the latest value of the dice
	int value = 0;
	for (int i = 0; i < amount; i++) {
		value = value + dice[i];
	}
	return value;
}

void Dice::throwDice() {//"Throws" the dice, giving it random value between 1 and 6
	srand((unsigned)time(NULL));

	for (int i = 0; i < amount; i++) {
		dice[i] = 1 + (rand() % 6);
	}
}

void Dice::lastThrowValue() {//prints the value of the dice
	for (int i = 0; i < amount; i++) {
		std::cout << "Dice number " << i + 1 << " value: " << dice[i] << '\n';
	}
}

void Dice::setDice() { //Ask the user for the amount of dice to be used
	std::cout << "How many dice you want to use?(1-5): ";
	std::cin >> amount;
}

int Dice::getDice() {//Returns the amount of dice used
	return amount;
}