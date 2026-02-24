#include <iostream>

using namespace std;

int main() {

    int a, b, c, d;


    cout << "Enter first number (a): ";
    cin >> a;

    cout << "Enter second number (b): ";
    cin >> b;

    cout << "Enter third number (c): ";
    cin >> c;

    cout << "Enter fourth number (d): ";
    cin >> d;

    int min1, min2, result;

    if (a < b) {
        min1 = a;
        cout << "Minimum between " << a << " and " << b << " -> " << min1 << endl;
    }
    else {
        min1 = b;
        cout << "Minimum between " << a << " and " << b << " -> " << min1 << endl;
    }

    if (c < d) {
        min2 = c;
        cout << "Minimum between " << c << " and " << d << " -> " << min2 << endl;
    }
    else {
        min2 = d;
        cout << "Minimum between " << c << " and " << d << " -> " << min2 << endl;
    }

    if (min1 > min2) {
        result = min1;
        cout << "\nThe larger of the two minimums -> " << result << endl;
    }
    else {
        result = min2;
        cout << "\nThe larger of the two minimums -> " << result << endl;
    }

    cout << "\n Result: " << result << endl;

    return 0;
}