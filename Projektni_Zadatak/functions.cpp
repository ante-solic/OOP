#include <iostream>
#include <vector>
#include <Windows.h>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "wheel.h"
using namespace std;

int checkState(Wheel w) {
	int multiplier = 0;

	if (w.firstRow[0] == w.firstRow[1] && w.firstRow[0] == w.firstRow[2])
		multiplier += 2;
	if (w.secondRow[0] == w.secondRow[1] && w.secondRow[0] == w.secondRow[2])
		multiplier += 2;
	if (w.thirdRow[0] == w.thirdRow[1] && w.thirdRow[0] == w.thirdRow[2])
		multiplier += 2;
	if (w.firstRow[0] == w.secondRow[0] && w.firstRow[0] == w.thirdRow[0])
		multiplier += 2;
	if (w.firstRow[1] == w.secondRow[1] && w.firstRow[1] == w.thirdRow[1])
		multiplier += 2;
	if (w.firstRow[2] == w.secondRow[2] && w.firstRow[2] == w.thirdRow[2])
		multiplier += 2;
	if (w.firstRow[0] == "7EVEN" && w.firstRow[1] == "7EVEN" && w.firstRow[2] == "7EVEN") {
		multiplier *= 2;
		cout << "DOUBLE MULTIPLIER!" << endl;
	}
	if (w.secondRow[0] == "7EVEN" && w.secondRow[1] == "7EVEN" && w.secondRow[2] == "7EVEN") {
		multiplier *= 2;
		cout << "DOUBLE MULTIPLIER!" << endl;
	}
	if (w.thirdRow[0] == "7EVEN" && w.thirdRow[1] == "7EVEN" && w.thirdRow[2] == "7EVEN") {
		multiplier *= 2;
		cout << "DOUBLE MULTIPLIER!" << endl;
	}
	if (w.firstRow[0] == "7EVEN" && w.secondRow[0] == "7EVEN" && w.thirdRow[0] == "7EVEN") {
		multiplier *= 2;
		cout << "DOUBLE MULTIPLIER!" << endl;
	}
	if (w.firstRow[1] == "7EVEN" && w.secondRow[1] == "7EVEN" && w.thirdRow[1] == "7EVEN") {
		multiplier *= 2;
		cout << "DOUBLE MULTIPLIER!" << endl;
	}
	if (w.firstRow[2] == "7EVEN" && w.secondRow[2] == "7EVEN" && w.thirdRow[2] == "7EVEN") {
		multiplier *= 2;
		cout << "DOUBLE MULTIPLIER!" << endl;
	}

	return multiplier;
}

void startScreen(int* money, int* bet) {
	char c;

	cout << "------------------------------------------" << endl;
	cout << "   ----WELCOME-TO-THE-WHEEL-OF-RISK----   " << endl;
	cout << "------------------------------------------" << endl;

	cout << "How much funds do you want to put into the slot machine? ";
	cin >> *money;
	cout << "How much money do you want to bet? ";
	cin >> *bet;
	cout << endl;

	cout << "------------------------------------------" << endl;
	cout << "             ----GOOD-LUCK----            " << endl;
	cout << "------------------------------------------" << endl;
	cout << endl;

	do {
		cout << "Press the Y button to start betting!" << endl;
		c = _getch();
	} while (tolower(c) != 'y');

	system("CLS");
}

void currentScreen(int* money, int* bet) {
	int currentMultiplier;
	int currentMoney;

	while (money >= 0)
	{
		char c;
		*money -= *bet;

		cout << endl;

		Wheel w;
		w.PrintWheel();

		cout << endl;

		currentMultiplier = checkState(w);
		currentMoney = *bet * currentMultiplier;
		*money += currentMoney;

		if (currentMoney > 0)
			cout << "Congratulations! You won " << currentMoney << "$!" << endl;

		if (*money <= 0)
			break;

		cout << endl << "Current funds: " << *money << "$" << endl;

		cout << "Do you want to continue betting? (Press the 'Y' button if yes)" << endl;

		c = _getch();

		if (tolower(c) != 'y')
			break;

		cout << "Do you want to change the amount you are betting? Current betting amount = " << *bet << "$ (Press the 'Y' button if yes)" << endl;

		c = _getch();

		if (tolower(c) == 'y')
		{
			do {
				cout << "What do you want the bet to be? (amount must be lower than " << *money << "$)" << endl;
				cin >> *bet;
			} while (*bet > *money);
		}

		system("CLS");
	}
}

void endScreen(int money) {
	if (money > 0)
		cout << "Congratulations you have won " << money << "$!" << endl;
	else
		cout << "Unfortunately you are out of funds. Better luck next time!" << endl;
}

