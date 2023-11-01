#include <iostream>
#include <vector>
#include <Windows.h>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include "wheel.h"
using namespace std;

Wheel::Wheel()
{
	srand(time(NULL));

	const string wordList[5] = { "apple","grape","orange","cherry","7EVEN" };

	for (int i = 0; i < 3; i++)
	{
		firstRow[i] = wordList[rand() % 5];
		secondRow[i] = wordList[rand() % 5];
		thirdRow[i] = wordList[rand() % 5];
	}
}

void Wheel::PrintWheel()
{
	cout << "----------------------------" << endl;
	cout << "   ----Wheel-of-luck!----   " << endl;
	cout << "----------------------------" << endl;


	for (int i = 0; i < 3; i++)
		cout << " " << firstRow[i] << " ";

	cout << endl;

	for (int i = 0; i < 3; i++)
		cout << " " << secondRow[i] << " ";

	cout << endl;

	for (int i = 0; i < 3; i++)
		cout << " " << thirdRow[i] << " ";

	cout << endl;

	cout << "----------------------------" << endl;
	cout << "----------------------------" << endl;
}


