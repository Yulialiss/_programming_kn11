#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x;
	double F;

	cout << "Enter x: ";
	cin >> x;

	if (x < 0.5) {
		F = tan(x + 1);

	}
	else if (x >= 0.5) {
		F = x * x + sin(x);
	}

	cout << "F = " << F << endl;

	return 0;

}