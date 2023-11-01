#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

class Exception {
public:
	virtual string errorMessage() = 0;
};

class notNumber:public Exception{
	string errorMessage() { 
		time_t now = time(0); 
		string dt = ctime(&now);
		return dt + "not a number"; }
};

class invalidOperator :public Exception {
	string errorMessage() {
		time_t now = time(0);
		string dt = ctime(&now);
		return dt + "invalid operator"; }
};

class divideByZero :public Exception {
	string errorMessage() {
		time_t now = time(0);
		string dt = ctime(&now);
		return dt + "divide by zero"; }
};

void inputNum(int *num) {
	cout << "Unesi vrijednost: ";
	cin >> *num;
	if (cin.fail()) {
		cin.clear();
		cin.ignore();
		throw notNumber();
	}
}

void inputOperator(char *op) {
	cout << "Unesi operaciju (+,-,/,*): ";
	cin >> *op;
	if (*op != '+' && *op != '-' && *op != '*' && *op != '/') {
		throw invalidOperator();
	}
}

void result(int x,int y,char op) {
	if (op == '/' && y == 0) {
		throw divideByZero();
	}
	else {
		if (op == '+')
			cout << x << op << y << " = " << x + y << endl;
		else if (op == '-')
			cout << x << op << y << " = " << x - y << endl;
		else if (op == '*')
			cout << x << op << y << " = " << x * y << endl;
		else if (op == '/')
			cout << x << op << y << " = " << x / y << endl;
	}
}

int main() {
	int x, y;
	char op;
	vector <string> errors;
	int k = 0;

	do {
		try {
			inputNum(&x);
			inputNum(&y);
			inputOperator(&op);
			result(x, y, op);
		}
		catch(Exception& exception) {
			errors.push_back(exception.errorMessage());
		}
		cout << endl;

		k++;
	} while (k != 3);

	for (int i = 0; i < errors.size(); i++) {
		cout << errors[i] << endl;
	}
}