#include <iostream>
#include <ctime>
using namespace std;

void addLastTwo(int *arr,int n) {
	for (int i = 2; i < n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
}

int main() {
	int* arr = new int[2]{1,1};
	int n;
	cout << "Unesi velicinu niza (vece do 3):";
	cin >> n;

	addLastTwo(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	delete[] arr;
	return 0;
}