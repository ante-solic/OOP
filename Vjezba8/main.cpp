#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

/*
template <typename T>
T manji(T a, T b) {
	if (a > b)
		return b;
	return a;
}
*/

/*
template <typename T> class Skup {
	T* array;
	int size;
	int capacity;
public:
	Skup(int capacity);
	void print();
	void add(int element);
	void del();
	void find(int element);
};

template <typename T>inline Skup<T>::Skup(int capacity) {
	this->array = new T[capacity];
	this->capacity = capacity;
	this->size = 0;
}

template <typename T>inline void Skup<T>::add(int element) {
	if (this->size >= this->capacity) {
		this->capacity += 1;
		T* newArray = new T[this->capacity];

		for (int i = 0; i < this->capacity; i++)
			newArray[i] = this->array[i];

		delete[]this->array;
		this->array = newArray;
	}

	this->array[this->size] = element;
	this->size++;
}

template <typename T>inline void Skup<T>::del() {
	this->size--;
}

template <typename T>inline void Skup<T>::find(int element) {
	for (int i = 0; i < this->size; i++) {
		if (element == this->array[i])
		{
			cout << "Element is in array!" << endl;
			return;
		}
	}
	cout << "Element not found!" << endl;
}

template <typename T> void Skup<T>::print()
{
	for (int i = 0; i < this->size; i++)
		cout << " " << this->array[i];
	cout << endl;
}
*/

template <typename T> class point {
	double x, y;
public:
	point();

	point(int x, int y) {
		set(x, y);
	}
	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}

	friend ostream& operator<<(ostream& output, const point& p) {
		output << "(" << p.x << "," << p.y <<")";
		return output;
	}

	double operator-(const point& p) {
		return sqrt(pow(p.x - this->x, 2) + pow(p.y - this->y, 2));;
	}
};

/*
template <typename T>
void sort(T array[], int n) {
	int temp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (array[i] < array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

template<>
void sort<char>(char array[], int n) {
	int temp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (tolower(array[i]) < tolower(array[j])) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
*/

int main() {
	/*
	Skup <int> arr(5);

	arr.add(1);
	arr.add(2);
	arr.add(3);
	arr.add(4);
	arr.add(5);
	arr.add(6);

	arr.print();

	arr.del();

	arr.print();

	arr.find(20);
	*/

	point <int> p1(2, 3), p2(3, 4);
	cout << " udaljenost tocaka " << p1 << " i " << p2 << " je " << p1 - p2 << endl;
}