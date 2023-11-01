#include <iostream>
#include <ctime>
using namespace std;

int& reference(int *arr,int size) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
			return arr[i];
	}
}

int main() {
	int arr[] = { -1,0, - 5,5,10 };
	int size = sizeof(arr) / sizeof(arr[0]);

	reference(arr,size)=0;


	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	return 0;
}