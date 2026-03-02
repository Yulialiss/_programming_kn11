#include <iostream>

using namespace std;

const int X = 1000;

int main() {
	int x;
	cout << "Enter x =: ";
	cin >> x;
	int numbers[X];
	for (int i = 0; i < x; i++) {
		cout << "Enter numbers[i]: ";
		cin >> numbers[i];
	}
	int min = numbers[0];
	int replacement = 0;
	int sum = 0;
	for (int i = 0; i < x; i++) {
		if (numbers[i] <= min) {
			min = numbers[i];
			replacement = i;
		}
		sum += numbers[i];
	}

	numbers[replacement] = sum / x;
	for (int i = 0; i < x; i++) {
		cout << numbers[i] << " ";
		cout << endl;
	}
	return 0;
}