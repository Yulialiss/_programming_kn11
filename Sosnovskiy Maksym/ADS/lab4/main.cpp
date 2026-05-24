#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    // Лабораторна робота №4 (АСД)
    // Студент: Сосновський Максим, КН-11
    // Варіант: 13
    
    srand(time(0));
    int n;
    cout << "Enter matrix size (n x n): ";
    cin >> n;

    // Створення та заповнення матриці випадковими числами
    vector<vector<int>> A(n, vector<int>(n));
    cout << "Generated Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 21 - 10; // Діапазон [-10, 10]
            cout << setw(4) << A[i][j];
        }
        cout << endl;
    }

    int lastNeg = 0;
    int resRow = -1, resCol = -1;
    bool found = false;

    // Обхід по стовпцях: зовнішній цикл по j (стовпці), внутрішній по i (рядки)
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (A[i][j] < 0) {
                lastNeg = A[i][j];
                resRow = i;
                resCol = j;
                found = true;
            }
        }
    }

    cout << "---------------------------------------" << endl;
    if (found) {
        cout << "Last negative element (column-wise scan): " << lastNeg << endl;
        cout << "Coordinates: Row [" << resRow << "], Column [" << resCol << "]" << endl;
    } else {
        cout << "No negative elements found in the matrix." << endl;
    }

    return 0;
}
