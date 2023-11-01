#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include<numeric>
#include "Header.hpp"

using namespace std;


int main() {
	vector <int> v;
	vector <int> v2;

	int n;

	cout << "Unesi velicinu vektora ";
	cin >> n;

	unos_vektora1(v, n);
	ispis_vektora(v);
	sort(v.begin(), v.end());
	v.insert(v.begin(), 0);
	v.push_back(accumulate(v.begin(), v.end(), 0));
	ispis_vektora(v);

	int a, b;

	cout << "Unesi donju granicu intervala";
	cin >> a;
	cout << "Unesi gornju granicu intervala";
	cin >> b;

	unos_vektora2(v2, a, b);
	ispis_vektora(v2);
	sort(v2.begin(), v2.end());
	v2.insert(v2.begin(), 0);
	v2.push_back(accumulate(v2.begin(), v2.end(), 0));
	ispis_vektora(v2);
}