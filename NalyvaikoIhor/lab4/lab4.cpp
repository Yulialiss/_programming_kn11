#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cout << "Enter the number of elements in the array:";
	cin >> n;

	if (n <= 0) { 
		cout << "The size of the array must be positive!" << endl;
		return 1;
	}

	vector<double> a(n);
	cout << "Enter " << n << " real numbers:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	double min_el = a[0];
	double max_el = a[0];

	for (int i = 0; i < n; i++) {
		if (a[i] < min_el) min_el = a[i];
		if (a[i] > max_el) max_el = a[i];
	}

	double min_sq = min_el * min_el;
	double max_sq = max_el * max_el;

	for (int i = 0; i < n; i++) {
		if (a[i] >= 0) {
			a[i] *= min_sq;
		}
		else {
			a[i] *= max_sq;
		}
	}

	cout << "Result of array processing:" << endl;
	for (int i = 0; i < n; i++) {
		cout <<a[i]<< "";
	}
	cout << endl;

	return 0;
}


