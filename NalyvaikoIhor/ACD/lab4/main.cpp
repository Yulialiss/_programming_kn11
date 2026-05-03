#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    const int n = 5; // Розмірність матриці
    int A[n][n];

    srand(time(0)); // Ініціалізація генератора випадкових чисел

    // Генерація та виведення матриці на екран
    cout << "Matrix A:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Випадкові значення від -5 до 5, щоб було більше нулів
            A[i][j] = 5 - rand() % 11;
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    int rowIdx = -1; // Змінна для збереження індексу рядка
    int colIdx = -1; // Змінна для збереження індексу стовпця
    bool found = false; // Прапорець, що вказує, чи знайдено елемент

    // ЛІНІЙНИЙ ПОШУК по рядках[cite: 8]
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] == 0) { // Умова: знайти перший нуль[cite: 8]
                rowIdx = i;
                colIdx = j;
                found = true;
                break; // Перериваємо внутрішній цикл (стовпці)[cite: 8]
            }
        }
        if (found) break; // Перериваємо зовнішній цикл (рядки)[cite: 8]
    }

    // Виведення результатів пошуку
    cout << "---------------------------" << endl;
    if (found) {
        cout << "First zero element found!" << endl;
        cout << "Row: " << rowIdx << endl;
        cout << "Column: " << colIdx << endl;
        cout << "Coordinates: A[" << rowIdx << "][" << colIdx << "]" << endl;
    } else {
        cout << "Zero element not found." << endl;
    }

    return 0;
}