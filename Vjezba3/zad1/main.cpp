#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
#include <cstdlib>
#include<cmath>
#include"Header.hpp"

int main() {

	srand(time(NULL));

	Position p1;
	Position p2;

	p1.setValue(12, 23, 5);
	p2.setValue(11, 15, 18);

	cout << "Koordinate prve tocke: " << endl;
	p1.getValue(p1); 
	cout << "Koordinate druge tocke: " << endl;
	p2.getValue(p2);

	cout << "Udaljenost tocaka u 2D ravnini je: " ;
	p1.distance2D(p1, p2);

	cout << "Udaljenost tocaka u 3D ravnini je: ";
	p1.distance3D(p1, p2);

	int n;
	cout << "Unesi broj meta koje zelis generirati: ";
	cin >> n;

	Target* t = new Target[n];

	for (int i = 0; i < n; i++) {
		t[i].p[0].setValue_random(-20, 20);
		t[i].p[1].setValue_random(-20, 20);
	}

	for (int i = 0; i < n; i++) {
		cout << "Koordinate " << i + 1 << ". mete" << endl;
		t[i].p[0].getValue(t[i].p[0]);
		t[i].p[1].getValue(t[i].p[1]);
		cout << endl;
	}

	Weapon w;
	w.p.setValue_random(-20, 20);
	cout << "Koordinate pucaca su: " << endl;
	w.p.getValue(w.p);
	cout << endl;

	shootTargets(t, w, n);

	delete[] t;

	return 0;
}