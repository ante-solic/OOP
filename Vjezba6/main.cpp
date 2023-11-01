#include <iostream>
#include "Zivotinja.h"
#include "Brojac.h"
#include "Ptica.h"
#include "Kukac.h"
#include "Pauk.h"

int main() {

	Vrabac sokol;
	Tarantula tarantula;
	Zohar zohar;

	Zivotinja* zivotinje[3];
	int len = sizeof(zivotinje) / sizeof(Zivotinja);

	zivotinje[0] = new Tarantula;
	zivotinje[1] = new Zohar;
	zivotinje[2] = new Vrabac;


	Brojac brojac;


	for (int i = 0; i < len; i++) {
		brojac.zivotinjaPrint(zivotinje[i]);
	}

	brojac.NogePrint();
}