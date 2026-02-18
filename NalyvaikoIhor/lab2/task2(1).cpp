#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, result;

    cout << "Enter x : ";
    cin >> x;

    if (x <= 0)
        result = sin(x);
    else
        result = cos(x);

    cout << "F(x) = " << result;

    return 0;
}
