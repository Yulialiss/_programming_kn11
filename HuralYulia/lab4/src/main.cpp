
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double a = 0.7, b = 3, h = 0.1;
    double product = 1;
    int count = 0;

    cout << "-----------------------------" << endl;
    cout << "     x\t\t y" << endl;
    cout << "-----------------------------" << endl;

    for (double x = a; x <= b; x += h) {

        double y = 2 * cos(x) - 1;

        cout << x << "\t" << y << endl;

        if (y < 0) {
            product *= y;
            count++;
        }
    }

    cout << "-----------------------------" << endl;

    cout << "Negative count ->" << count << endl;

    if (count > 0)
        cout << "Product ->" << product << endl;
    else
        cout << "No negative values." << endl;

    cout << "-----------------------------" << endl;

    return 0;
}
