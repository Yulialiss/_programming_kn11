#include <iostream>
using namespace std;

int minSum(int a[], int n) {
	int m = a[0] + a[1];
	
	for (int i = 1; i<n-1; i++)
		if (a[i] + a[i + 1] < m)
			m = a[i] + a[i+1];

	return m;
}

int main() {
	int n, a[100];

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	cout << minSum(a, n);
	
	return 0;
}