#include <iostream>

using namespace std;

// Функція для знаходження Найбільшого Спільного Дільника (алгоритм Евкліда)
long long gcd(long long a, long long b) {
    a = abs(a);
    b = abs(b);
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

// Функція для скорочення дробу
void simplify(long long &num, long long &den) {
    long long common = gcd(num, den);
    num /= common;
    den /= common;
}

int main() {
    // Лабораторна робота №3 (АСД)
    // Студент: Сосновський Максим, КН-11
    // Варіант: 13
    
    int n;
    cout << "Enter the number of fractions: ";
    cin >> n;

    long long finalNum = 0;
    long long finalDen = 1;

    for (int i = 0; i < n; i++) {
        long long num, den;
        cout << "Enter fraction " << i + 1 << " (numerator and denominator): ";
        cin >> num >> den;

        if (den == 0) {
            cout << "Denominator cannot be zero!" << endl;
            return 1;
        }

        // Додавання дробів: a/b + c/d = (a*d + b*c) / (b*d)
        finalNum = finalNum * den + num * finalDen;
        finalDen = finalDen * den;

        // Скорочуємо дріб на кожному кроці, щоб уникнути переповнення
        simplify(finalNum, finalDen);
    }

    cout << "---------------------------------------" << endl;
    cout << "Resulting sum in irreducible form: " << finalNum << "/" << finalDen << endl;

    return 0;
}
