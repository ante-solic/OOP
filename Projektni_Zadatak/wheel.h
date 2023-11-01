#ifndef WHEEL_H
#define WHEEL_H

#include <iostream>
#include <vector>
#include <Windows.h>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "wheel.h"
using namespace std;

class Wheel
{
	public:
		string firstRow[3], secondRow[3], thirdRow[3];
		
		Wheel();
		void PrintWheel();
};


int checkState(Wheel w);
void startScreen(int* money, int* bet);
void currentScreen(int* money, int* bet);
void endScreen(int money);

#endif WHEEL_H