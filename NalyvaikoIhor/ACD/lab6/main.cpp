#include <iostream>

using namespace std;

// Рекурсивна функція для обчислення квадрата цілого числа
int recursiveSquare(int n) {
    // Базовий випадок: квадрат 0 дорівнює 0
    if (n == 0) {
        return 0;
    }
    // Обробка від'ємних чисел (оскільки (-n)^2 = n^2)
    if (n < 0) {
        n = -n;
    }

    // Рекурсивний крок згідно з формулою: n^2 = (n-1)^2 + 2*(n-1) + 1
    return recursiveSquare(n - 1) + 2 * (n - 1) + 1;
}

int main() {
    int num;
    cout << "Vvedit tsile chislo: ";
    cin >> num;

    int result = recursiveSquare(num);

    cout << "Kvadrat chisla " << num << " dorivnyuye: " << result << endl;

    // Приклади для перевірки
    cout << "\nTestuvannya:" << endl;
    cout << "3^2 = " << recursiveSquare(3) << " (ochikuvano 9)" << endl;
    cout << "5^2 = " << recursiveSquare(5) << " (ochikuvano 25)" << endl;

    return 0;
}