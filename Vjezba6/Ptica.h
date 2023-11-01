#ifndef PTICA_H
#define PTICA_H

#include"Zivotinja.h"
#include<iostream>

using namespace std;

class Ptica : public Zivotinja {
	string vrsta;
	int noge;

public:
	int brojNogu();
	string vrstaZivotinje();
	void setVrsta(string s);
	void setNoge(int n);
};

class Vrabac : public Ptica {
public:
	Vrabac();
};

#endif