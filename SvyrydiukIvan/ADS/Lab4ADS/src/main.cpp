#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of matrix: ";
    cin >> n;
    cout << endl;

    vector<vector<int>> A;
    A.resize(n, vector<int>(n));

    cout << "     Original matrix     " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = 10 - rand() % 21;
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    int NumberPos = -1;
    int NumberNeg = -1;

    for (int i = 0; i < n; i++) {
        if (A[i][n - 1 - i] > 0) {
            NumberPos = i;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        if (A[i][n - 1 - i] < 0) {
            NumberNeg = i;
        }
    }

    if (NumberPos != -1 && NumberNeg != -1) {
        int temp = A[NumberPos][n - NumberPos - 1];
        A[NumberPos][n - NumberPos - 1] = A[NumberNeg][n - NumberNeg - 1];
        A[NumberNeg][n - NumberNeg - 1] = temp;
    }

    cout << "     New matrix     " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}