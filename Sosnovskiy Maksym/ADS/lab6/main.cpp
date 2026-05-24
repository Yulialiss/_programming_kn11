#include <iostream>

using namespace std;

// Рекурсивна функція для обчислення значення (Приклад для Варіанту 13)
double recursiveFunction(int n) {
    // Базовий випадок
    if (n == 0) return 1;
    if (n == 1) return 2;
    
    // Рекурсивний крок: Xn = 2 * Xn-1 + 3 * Xn-2
    return 2 * recursiveFunction(n - 1) + 3 * recursiveFunction(n - 2);
}

int main() {
    // Лабораторна робота №6 (АСД)
    // Студент: Сосновський Максим, КН-11
    // Варіант: 13
    
    int n;
    cout << "Enter n to calculate Xn: ";
    cin >> n;

    if (n < 0) {
        cout << "N must be non-negative!" << endl;
        return 1;
    }

    cout << "---------------------------------------" << endl;
    cout << "Result for n = " << n << " is: " << recursiveFunction(n) << endl;

    return 0;
}
