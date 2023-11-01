#include "Pauk.h"
#include <iostream>

using namespace std;

int Pauk::brojNogu() {
	return this->noge;
}

string Pauk::vrstaZivotinje() {
	return this->vrsta;
}

void Pauk::setVrsta(string s) {
	this->vrsta = s;
}

void Pauk::setNoge(int n) {
	this->noge = n;
}


Tarantula::Tarantula() {
	setVrsta("Tarantula");
	setNoge(8);
}
