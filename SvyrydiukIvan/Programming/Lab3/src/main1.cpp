#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x;
	cout << "Enter x: ";
	cin >> x;

	double sum = x;
	double i = x;

	for (int a = 3; a <= 13; a += 2) {
		i = i * (-x * x / ((a - 1) * a));
		sum = sum + i;
	}
	cout << sum << endl;

	return 0;
}