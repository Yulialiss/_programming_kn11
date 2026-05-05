#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a, b, h, x, y, sumNeg = 0, prodNeg = 1;

	cout << "LeftBorder: ";
	cin >> a;
	cout << "RightBorder: ";
	cin >> b;
	cout << "Period: ";
	cin >> h;

	for (x = a; x <= b; x += h) {
		y = sin(x) + 0.5 * cos(x);
		cout << "X: " << x << "/" << "Y: " << y << "\n";

		if (y < 0) {
			sumNeg += y;
			prodNeg *= y;
		} 
	}

	if (sumNeg != 0) {
		cout << "\nSumNeg Y: " << sumNeg << "\n";
		cout << "ProdNeg Y: " << prodNeg << "\n";
	}
	else
		cout << "No negative Y\n";

	return 0;
}