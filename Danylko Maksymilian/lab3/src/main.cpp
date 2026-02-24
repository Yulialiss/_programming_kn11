#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, h;
    cout << " Enter a, b, h: ";
    cin >> a >> b >> h;

    double maxY, minY;
    double xMax, xMin;
    bool first = true;

    cout << "x\t y" << endl;

    for (double x = a; x <= b; x += h) {
        double y = 1 / tan(x) + 1;

        cout << x << "\t" << y << endl;

        if (first) {
            maxY = minY = y;
            xMax = xMin = x;
            first = false;
        }

        if (y > maxY) {
            maxY = y;
            xMax = x;
        }

        if (y < minY) {
            minY = y;
            xMin = x;
        }
    }

    cout << "Sum = " << xMax * xMin << endl;

    return 0;
}