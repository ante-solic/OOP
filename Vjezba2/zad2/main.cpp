#include <iostream>
#include <string>
#include<vector>
#include "Header.hpp"

using namespace std;

int main() {
	string s = "Koliko toliko ovoliko je bilo";
	string sub = "iko";

	int n = substring(&s, &sub);
	cout << "Substring se pojavljuje " << n << " puta" << endl;

	vector<string>v;
	sort_vector(v);

	string rec = "Ja bih, ako ikako mogu, ovu recenicu napisala ispravno.";

	interpunkcija(rec);

	vector <string> str;

	pig_latin(str);
}