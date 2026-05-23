#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Laboratory Work #5
    // Student: Sosnovskiy Maksym
    // Group: KN-11
    // Variant: 13

    cout << "Laboratory Work #5: Two-dimensional Arrays (Matrices)" << endl;
    cout << "Variant 13: Matrix processing" << endl;
    cout << "---------------------------------------------" << endl;

    const int ROWS = 3;
    const int COLS = 3;
    int matrix[ROWS][COLS];
    int diagonalSum = 0;

    // Input matrix elements
    cout << "Enter elements for a 3x3 matrix:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Calculate sum of the main diagonal (where i == j)
    for (int i = 0; i < ROWS; i++) {
        diagonalSum += matrix[i][i];
    }

    // Display the matrix
    cout << "\nYour matrix:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }

    cout << "---------------------------------------------" << endl;
    cout << "Sum of main diagonal elements: " << diagonalSum << endl;

    return 0;
}
