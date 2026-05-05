#include <iostream>
using namespace std;

int maxRow(int A[][100], int n, int i) {
	int max = A[i][0];
	for (int j = 1; j < n; j++) {
		if (A[i][j] > max) {
			max = A[i][j];
		}
	}
	return max;
}

int minCol(int A[][100], int n, int j) {
	int min = A[0][j];
	for (int i = 1; i < n; i++) {
		if (A[i][j] < min) {
			min = A[i][j];
		}
	}
	return min;
}

int calculate(int A[][100], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int xi = maxRow(A, n, i);
		int yi = minCol(A, n, i);
		sum += xi * yi;
	}
	return sum;
}

int main() {
	int n;
	cout << "Enter n = ";
	cin >> n;
	int A[100][100];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "A[" << i << "][" << j << "] = ";
			cin >> A[i][j];
		}
	}

	cout << calculate(A, n) << endl;
	return 0;
}