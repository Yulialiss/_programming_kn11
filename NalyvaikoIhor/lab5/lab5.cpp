#include <iostream>
#include <vector>

using namespace std;

int main() {
	int m[5][5] = {
		{ 1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};
	
	cout << "Original matrix:" << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << m[i][j] << "\t";
		}
		cout << endl;
	}

	cout << "Transposed matrix:" << endl;
	for (int i = 4; i >= 0; i--) {
		for (int j = 4; j >= 0; j--) {
			cout << m[j][i] << "\t";
		}
		cout << endl;
	}
		return 0;
	}


