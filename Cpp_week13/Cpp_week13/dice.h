#pragma once
class Dice {
	public:
		Dice();
		Dice(int);

		int getLastValue();
		void throwDice();
		void lastThrowValue();

		void setDice();
		int getDice();

	private:
		
		int dice[5] = { 1, 1, 1, 1, 1 };
		int amount;

};