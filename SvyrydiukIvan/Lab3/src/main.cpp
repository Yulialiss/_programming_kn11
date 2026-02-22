#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a, b, h;

	cout << "Enter a, b, h: ";
	cin >> a >> b >> h;

	double i, y, ymax, ymin;

	for (i = a; i <= b; i += h) {
		y = tan(2 * i) - 3;
		cout << "X: " << i << "\t" << "Y: " << y << endl;

		if (i == a) {
			ymin = y;
			ymax = y;
	}
		if (y < ymin) ymin = y;
		if (y > ymax) ymax = y;
	}
	double result;
		result = abs(ymax * ymin);
		cout << endl << "Result = " << result << endl;

	return 0;
}