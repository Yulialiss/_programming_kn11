#include <iostream>
#include <ctime>

using namespace std;

int main() {
	int n;
	cout << "Enter matrix size: ";
	cin >> n;

	int A[100][100];
	srand(time(0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			A[i][j] = 10 - rand() % 21;
			cout << A[i][j] << " ";
		}

		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (A[i][j] < 0) {
				cout << "First negative: " << A[i][j] << endl;
				cout << "Row: " << i + 1 << endl;
				cout << "Column: " << j + 1 << endl;

				return 0;
			}
		}
	}

	cout << "No negative elements";

	return 0;
}