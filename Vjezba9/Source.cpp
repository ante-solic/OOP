#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

bool IsOdd(int i)
{
	return i % 2;
}

int main() {
	vector<int> vector;

	try {
		ifstream file;

		file.open("numbers.txt");

		if (file.is_open()) {
			istream_iterator<int> first(file);
			istream_iterator<int> last;

			copy(first, last, back_inserter(vector));
		}
		else {
			throw string("File not found!");
		}

	}
	catch (string error) {
		cout << error << endl;
		return 1;
	}
	//nalazi broj brojeva vecih od 500
	int counter = count_if(vector.begin(), vector.end(), [](int i) { return i > 500; });
	cout << "Numbers larger than 500: " << counter << endl;

	//nalazi najmanji broj
	int minElement = *min_element(vector.begin(), vector.end());
	cout << "The smallest number is: " << minElement << endl;

	//nalazi najveci broj
	int maxElement = *max_element(vector.begin(), vector.end());
	cout << "The largest number is: " << maxElement << endl;

	//brise sve brojeve manje od 300
	vector.erase(remove_if(vector.begin(), vector.end(), [](int i) { return i < 300; }), vector.end());

	//sortira brojeve silazno
	sort(vector.begin(), vector.end(), greater<int>());

	for (auto num : vector) {
		cout << num << endl;
	}
	//pronalazi prvi neparni broj
	std::vector<int>::iterator isOdd = find_if(vector.begin(), vector.end(), [](int i) { return i % 2; });
	cout << "The first even number is: " << *isOdd << endl;

	//pronalazi broj neparnih brojeva
	int notEven = count_if(vector.begin(), vector.end(), [](int i) {if (i % 2 == 0)
		return true;
	else
		return false; });
	cout << "Number of non even number is: " << notEven << endl;

	//zamjenjuje sve potencije broja 2 sa brojem 2
	replace_if(vector.begin(), vector.end(), [](int i){ return (ceil(log2(i)) == floor(log2(i))); }, 2);
	for (auto num : vector) {
		cout << num << endl;
	}
}