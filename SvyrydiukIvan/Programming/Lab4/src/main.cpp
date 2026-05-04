#include <iostream>

using namespace std;
int main() {

	int a;
	cout << "Enter the number of elements: ";
	cin >> a;

	double numbers[50];

	for (int i = 0; i < a; i++) {
		cout << "Enter numbers[i]: ";
		cin >> numbers[i];
	}

	double min = numbers[0];

	for (int i = 0; i < a; i+=2) {
		if (numbers[i] < min) {
			min = numbers[i];
		}
	}
	cout << "Min among odd elements: " << min << endl;

	return 0;
}