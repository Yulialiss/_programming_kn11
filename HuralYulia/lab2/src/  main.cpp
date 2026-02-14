#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter third number: ";
    cin >> c;
    cout << "..............................\n";

    int max = a;
    int min = a;

    if (b > max && c <= max) {
        max = b;
    }
    else if (c > max) {
        max = c;
    }

    cout << "Max number -> " << max << endl;

    if (b < min && c >= min) {
        min = b;
    }
    else if (c < min) {
        min = c;
    }

    cout << "Min number -> " << min << endl;

    int sumMinMax = (max + min);
    cout << "\n..............................\n";
    cout << "Sum of Min and Max -> " << sumMinMax;
    cout << "\n..............................\n";
    return 0;
}
