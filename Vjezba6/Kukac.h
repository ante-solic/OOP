#ifndef KUKAC_H
#define KUKAC_H

#include <iostream>
#include "Zivotinja.h"

using namespace std;


class Kukac : public Zivotinja {
	string vrsta;
	int noge;
public:
	int brojNogu();
	string vrstaZivotinje();
	void setVrsta(string s);
	void setNoge(int n);
};

class Zohar : public Kukac {
public:
	Zohar();
};

#endif