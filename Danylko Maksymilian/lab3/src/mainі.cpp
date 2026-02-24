#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    double P = 1;

    for (int i = 1; i <= n; i++) {
        P = P * (1.0 - 1.0 / (2 * i));
    }

    cout << "P = " << P << endl;

    return 0;
}