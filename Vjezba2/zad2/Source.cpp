#include "Header.hpp"
#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
#include <cstdlib>



int substring(string* s, string* sub) {
	int n = 0; //broj pojavljivanja substringa u stringu
	string a = *s;
	string b = *sub;

	size_t pos = 0; // s koje pozicije u stringu krecemo

	while ((pos = a.find(b, pos)) != string::npos) {
		n++;
		pos = pos + b.length();
	}
	return n;
}

void sort_vector(vector<string>& v) {
	string s;
	cout << "Unosi clanove vektora: (u slucaju da zelis prekinuti vektor stisni Ctrl+Z) ";
	while (cin >> s) {
		v.push_back(s);
	}

	for (int i = 0; i < v.size(); i++) {
		reverse(v[i].begin(), v[i].end());
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}

void interpunkcija(string& s) {
	char temp;
	
	for (int i = 0; i < s.length(); i++) {
		if (isspace(s[i]) && ispunct(s[i + 1]))
		{
			temp = s[i];
			s[i] = s[i + 1];
			s[i + 1] = temp;
			i = i + 2;
		}
	}

	for (int i = 0; i < s.length(); i++) {
		cout << s[i];
	}
	cout << endl;
}

void pig_latin(vector<string>& s) {

	//s.push_back("What time is it?");
	s.push_back("Say hello to my little friend!");
	//s.push_back("I am who I am.");

	srand(time(0));
	int random = rand() % s.size();
	
	string r_string = s[random];
	string temp;
	string temp2;
	char temp3;
	int n = r_string.length();
	int i = 0;

	while(i < n) {
		r_string[i] = tolower(r_string[i]);

		if (isspace(r_string[i])) {
			i++;
		}
		r_string[i] = tolower(r_string[i]);

		temp3 = r_string[i];

		while (r_string[i] != 'a' && r_string[i] != 'e' && r_string[i] != 'i' && r_string[i] != 'o' && r_string[i] != 'u' && !isspace(r_string[i])) {
			temp2.push_back(r_string[i]);
			i++;
		}
		while (!isspace(r_string[i]) && r_string[i] != '\0') {
			if (ispunct(r_string[i]))
			{
				i++;
				continue;
			}
			temp.push_back(r_string[i]);
			i++;
		}
		temp.append(temp2);

		if (temp3 == 'a' || temp3 == 'e' || temp3 == 'i' || temp3 == 'o' || temp3 == 'u')
			temp.append("hay ");
		else
			temp.append("ay ");

		if (ispunct(r_string[i - 1])) {
			temp.pop_back();
			temp.push_back(r_string[i - 1]);
		}
		temp2.clear();
	}

	cout << temp;
}