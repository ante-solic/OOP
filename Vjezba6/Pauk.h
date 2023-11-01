#ifndef PAUK_H
#define PAUK_H


#include<iostream>
#include "Zivotinja.h"
using namespace std;

class Pauk : public Zivotinja {
	string vrsta;
	int noge;

public:
	int brojNogu();
	string vrstaZivotinje();
	void setVrsta(string s);
	void setNoge(int n);
};

class Tarantula : public Pauk {
public:
	Tarantula();
};

#endif