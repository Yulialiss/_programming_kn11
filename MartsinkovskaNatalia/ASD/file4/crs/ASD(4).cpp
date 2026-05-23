#include <iostream>
using namespace std;

int main() {
		int n;
	do {
		cout << "Enter size of two-dimensional array: \n";
		cin >> n;
	} while (n <= 0 || n > 10);

	int arr[10][10];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			
			arr[i][j] = 10 - rand()% 21;
			cout << arr[i][j]<<"\t";
		}
		cout << "\n\n";
	}

	int row = -1, column = -1;

	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) {
		
			if (arr[i][j] > 0) {
				row = i;
				column = j;
			}
		}
	}
	if (row == -1 && column == -1) {
		cout << "The array does not contain any positive numbers.\n";
	}
	else {
		cout << "Last positive number is: " << arr[row][column] << " with coordinates [" << row + 1 << "][" << column + 1 << "]" << endl;
	}

	return 0;
}
