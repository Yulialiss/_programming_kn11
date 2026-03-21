#include <iostream>
using namespace std;

void simplify(int& num, int& den) {
    int d = 1;

    for (int i = 1; i <= num && i <= den; i++) {
        if (num % i == 0 && den % i == 0) {
            d = i;
        }
    }

    num /= d;
    den /= d;
}

void add(int A, int B, int C, int D) {
    int num = A * D + C * B;
    int den = B * D;

    simplify(num, den);

    cout << "Addition: " << num << "/" << den << endl;
}

void multiply(int A, int B, int C, int D) {
    int num = A * C;
    int den = B * D;

    simplify(num, den);

    cout << "Multiplication: " << num << "/" << den << endl;
}

void divide(int A, int B, int C, int D) {
    int num = A * D;
    int den = B * C;

    simplify(num, den);

    cout << "Division: " << num << "/" << den << endl;
}

int main() {
    int A, B, C, D;

    cout << "Enter first fraction (A B): ";
    cin >> A >> B;
    cout << "------------------------------" << endl;

    cout << "Enter second fraction (C D): ";
    cin >> C >> D;
    cout << "------------------------------" << endl;


    add(A, B, C, D);
    multiply(A, B, C, D);
    divide(A, B, C, D);

    return 0;
}