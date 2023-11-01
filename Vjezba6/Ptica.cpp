#include "Ptica.h"
#include <iostream>

using namespace std;

int Ptica::brojNogu() {
	return this->noge;
}

string Ptica::vrstaZivotinje() {
	return this->vrsta;
}

void Ptica::setVrsta(string s) {
	this->vrsta = s;
}

void Ptica::setNoge(int n) {
	this->noge = n;
}


Vrabac::Vrabac() {
	setVrsta("Vrabac");
	setNoge(2);
}
