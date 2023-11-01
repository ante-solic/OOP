#ifndef BROJAC_H
#define BROJAC_H

#include "Zivotinja.h";

class Brojac {
private:
	int legs = 0;
public:
	void zivotinjaPrint(Zivotinja* zivotinja) {
		cout << "Dodan: " << zivotinja->vrstaZivotinje() << endl;
		this->legs += zivotinja->brojNogu();
	};

	void NogePrint() {
		cout << "Ukupno nogu: " << this->legs << endl;
	}
};


#endif 

