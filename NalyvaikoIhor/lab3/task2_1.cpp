#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, h;
    cout << "--- Zavdannya 1: Tabulyuvannya ---" << endl;
    cout << "Vvedit pochatok (a): "; cin >> a;
    cout << "Vvedit kinec (b): "; cin >> b;
    cout << "Vvedit krok (h): "; cin >> h;

    double dobutok = 1.0;
    bool found = false;

    cout << "\n" << setw(10) << "x" << " | " << setw(10) << "y" << endl;
    cout << "---------------------------" << endl;

    for (double x = a; x <= b + h/10; x += h) {
        // Формула: y = x * sin^2(x) + 1
        double y = x * pow(sin(x), 2) + 1;

        cout << setw(10) << fixed << setprecision(2) << x
             << " | " << setw(10) << y << endl;

        if (y > 1) {
            dobutok *= y;
            found = true;
        }
    }

    if (found)
        cout << "\nDobutok y > 1: " << dobutok << endl;
    else
        cout << "\nZnachen y > 1 ne znaydeno" << endl;

    return 0;
}