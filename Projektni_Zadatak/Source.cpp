#include <iostream>
#include <vector>
#include <Windows.h>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "wheel.h"
using namespace std;


int main()
{
	int money=0, bet=0;

	startScreen(&money, &bet);

	currentScreen(&money, &bet);

	cout << endl;

	endScreen(money);
}