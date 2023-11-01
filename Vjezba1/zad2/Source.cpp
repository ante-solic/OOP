#include <iostream>
#include <ctime>
using namespace std;

void input(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "Unesi " << i << ". clan niza: ";
		cin >> arr[i];
	}
}
void print(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int removeDuplicate(int* arr,int size) {
	int temp;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	int* temp_array = new int[size];
	int j = 0;

	for (int i = 0; i < size - 1; i++)
		if (arr[i] != arr[i + 1])
			temp_array[j++] = arr[i];

	temp_array[j++] = arr[size - 1];

	for (int i = 0; i < size; i++)
		arr[i] = temp_array[i];

	return j;
}

int main() {
	int size;
	cout << "Unesi velicinu niza: ";
	cin >> size;
	int* arr = new int[size];

	input(arr, size);
	print(arr, size);

	size = removeDuplicate(arr, size);
	cout << "The array without duplicate numbers is: ";
	print(arr, size);

	return 0;
}