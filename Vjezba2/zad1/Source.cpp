#include "Header.hpp"
#include<vector>
using namespace std;

void unos_vektora1(vector<int>& v, int n) {
	int i = 0;
	int value;

	while (i < n) {
		cout << "Unesi " << i + 1 << ". clan vektora: ";
		cin >> value;
		v.push_back(value);
		i++;
	}

	cout << endl;
}

void unos_vektora2(vector<int>& v, int a, int b) {
	int value;

	cout << "Unesi clan vektora: ";
	cin >> value;
	while (value > a && value < b) {
		v.push_back(value);
		cout << "Unesi clan vektora: ";
		cin >> value;
	}
	cout << endl;
}

void ispis_vektora(vector<int>& v) {
	cout << "Vektor clanovi: ";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}