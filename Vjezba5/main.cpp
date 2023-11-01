#include <iostream>
#include <stdlib.h>
#include "Header.hpp"

using namespace std;
using namespace OOP;
int main() {
	Vec3 v1, v2;

	cout << "Unesi vrijednost prvog vektora: " << endl;
	cin >> v1;
	cout << "Unesi vrijednost drugog vektora: " << endl;
	cin >> v2;
	cout << "Koordinate prvog vektora: " << v1 << endl;
	cout << "Koordinate drugog vektora: " << v2 << endl;

	Vec3 v3;
	//v3 = v1 + v2;
	//cout << "Zbroj dva vektora je: " << v3 << endl;
	v3 = v1 - v2;
	cout << "Razlika vektora je: " << v3 << endl;

	Vec3 v4(10, 20, 30);
	v4 += v3;
	cout << "+= nam daje rezultat: " << v4 << endl;

	cout << "Mnozenje rezultat: " << v4 * 5 << endl;

	if (v1 == v2) {
		cout << "Jednaki su!" << endl;
	}
	else {
		cout << "Nisu jednaki!" << endl;
	}

	cout << "Koordinata vektora: " << v1[1] << endl;

	system("pause");
	return 0;
}