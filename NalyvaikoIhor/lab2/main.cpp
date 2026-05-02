#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // === ЗАВДАННЯ 1: Пошук "зайвого" числа ===
    cout << "--- Zavdannya 1 ---" << endl;
    double a1, a2, a3, a4;
    int n;
    cout << "Vvedit 4 chisla (napryklad: 10 10 3 10): ";
    cin >> a1 >> a2 >> a3 >> a4;

    // Логіка пошуку номера числа, яке відрізняється від інших
    if (a1 != a2 && a1 != a3) {
        n = 1;
    } else if (a2 != a1 && a2 != a3) {
        n = 2;
    } else if (a3 != a1 && a3 != a2) {
        n = 3;
    } else {
        n = 4;
    }

    cout << "Nomer vidminnogo chisla n = " << n << endl;

    cout << "\n--------------------------\n" << endl;

    // === ЗАВДАННЯ 2: Розрахунок функції F(x) ===
    cout << "--- Zavdannya 2 ---" << endl;
    double x, F;
    cout << "Vvedit x: ";
    cin >> x;

    // Реалізація розгалуження (if-else)
    if (x <= 0) {
        F = sin(x); // Умова з твого фото
    } else {
        F = pow(x, 2); // Стандартне продовження умови для x > 0
    }

    cout << "Rezultat F(x) = " << F << endl;

    return 0;
}