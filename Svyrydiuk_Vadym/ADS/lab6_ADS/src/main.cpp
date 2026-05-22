#include <iostream>

using namespace std;

// рекурсивна функція обчислення комбінацій
int C(int n, int m) {

    // якщо m = 0 або m = n
    if (m == 0 || m == n) {
        return 1;
    }

    // якщо m більше n
    if (m > n) {
        return 0;
    }

    // рекурсивне обчислення
    return C(n - 1, m - 1) + C(n - 1, m);
}

int main() {

    int n, m;

    // введення значень
    cout << "Enter n and m: ";
    cin >> n >> m;

    // виведення результату
    cout << "Result: " << C(n, m);

    return 0;
}