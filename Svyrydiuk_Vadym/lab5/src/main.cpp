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

    bool allDif = true;
    for (int i0 = 0; i0 < n; i0++) {
        for (int j0 = 0; j0 < m; j0++) {

            for (int i1 = 0; i1 < n; i1++) {
                for (int j1 = 0; j1 < m; j1++) {
                    if ((i0 != i1 || j0 != j1) && matrix[i0][j0] == matrix[i1][j1]) {
                        allDif = false;
                    }
                }
            }
        }
    }
    if (!allDif) {
        cout << "Error: elements must be different!" << endl;
        return 0;
    }

    cout << "Columns with increasing value: ";

    bool found = false;

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
            found = true;
        }
    }
    if (!found) {
        cout << "None";
    }
    cout << endl;

    return 0;
}