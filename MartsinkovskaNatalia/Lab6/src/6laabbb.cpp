#include <iostream>
using namespace std;

bool rev(int x) {
	int temp = x;

	while (temp > 0) {
		int digit = temp % 10;

		if (digit == 0 || x % digit != 0) {
			return false;
		}
		temp /= 10;
	}
	return true;
}

int main() {
	int n;
	cout << "Enter n:" << endl;
	cin >> n;

	for (int i = 1; i < n; i++) {
		if (rev(i)) {
			cout << i << "\t";
		}
		
	}
	return 0;
}