#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double P = 1;
	double a;
	int n;

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter n: ";
	cin >> n;

	for (int x = 0; x < n; x += 1) {
		P *= (a + x);
	}

	cout << "P = " << P;

	return 0;
}

