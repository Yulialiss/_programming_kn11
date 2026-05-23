#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // Laboratory Work #3
    // Student: Sosnovskiy Maksym
    // Group: KN-11
    // Variant: 13

    cout << "Laboratory Work #3: Loops" << endl;
    cout << "Variant 13: Function calculation in a loop" << endl;
    cout << "-------------------------------------------" << endl;

    double start = 0.0;
    double end = 2.0;
    double step = 0.2;

    cout << setw(10) << "x" << setw(15) << "y = sin(x)+x" << endl;
    cout << "-------------------------------------------" << endl;

    // Task: Calculate y = sin(x) + x from 0 to 2 with step 0.2
    for (double x = start; x <= end; x += step) {
        double y = sin(x) + x;
        cout << setw(10) << fixed << setprecision(1) << x 
             << setw(15) << setprecision(4) << y << endl;
    }

    return 0;
}
