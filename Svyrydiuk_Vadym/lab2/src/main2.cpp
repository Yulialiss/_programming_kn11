#include <iostream>
#include <cmath>

using namespace std;

int main() {

	float x;
	float F;

	cout << "Enter x: ";
	cin >> x;

	if (x < 1) {
		F = abs(sin(x)) + 4 * cos(x) + 4;
	
	}
	else {
		F = cos(x * x) - 6 * sin(3 * x);
	
	}

	cout << "Number F: " << F;

	return 0;
}