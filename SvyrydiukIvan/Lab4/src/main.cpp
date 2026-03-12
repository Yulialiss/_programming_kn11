#include <iostream>

using namespace std;
int main() {

	int a;
	cout << "Enter the number: ";
	cin >> a;

	double numbers[50];

	for (int i = 0; i < a; i++) {
		cout << "Enter numbers[i]: ";
		cin >> numbers[i];
	}

	double min = numbers[0];

	for (int i = 0; i < a; i++) {
		if ((numbers[i] < min) && ((i % 2) != 0)) {
			min = numbers[i];
		}
	}
	cout << "Min: " << min << endl;

	return 0;
}