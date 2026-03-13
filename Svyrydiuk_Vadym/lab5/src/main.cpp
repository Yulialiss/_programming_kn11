#include <iostream>

using namespace std;

int main() {
	int n, m;
	cout << "Enter lines n: ";
	cin >> n;
	cout << "Enter columns m: ";
	cin >> m;

	int matrix[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
		}
	}

	cout << "Columns with increasing value: ";
    for (int j = 0; j < m; j++) {
        bool increasing = true;
        for (int i = 0; i < n - 1; i++) {
            if (matrix[i][j] >= matrix[i + 1][j]) {
                increasing = false;
                break;
            }
        }
        if (increasing) {
            cout << j + 1 << " ";
        }
    }
    cout << endl;

    return 0;
}