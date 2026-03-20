#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // ---------- Завдання 1 ----------
    double a, b, h;
    cout << "Enter a, b, h: ";
    cin >> a >> b >> h;

    double product = 1.0;

    cout << "\nTable of values:\n";
    cout << "x\t\ty\n";

    for (double x = a; x <= b; x += h) {
        double y = x * pow(sin(x), 2) + 1;

        cout << x << "\t\t" << y << endl;

        if (y > 1) {
            product *= y;
        }
    }

    cout << "\nProduct of y > 1 = " << product << endl;


    // ---------- Завдання 2 ----------
    int n;
    cout << "\nEnter n: ";
    cin >> n;

    long long S = 0;

    for (int i = 1; i <= n; i++) {
        long long term = 1;
        for (int j = i; j <= 2 * i; j++) {
            term *= j;
        }
        S += term;
    }

    cout << "S = " << S << endl;

    return 0;
}