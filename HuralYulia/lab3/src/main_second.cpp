#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    double sum = 0;

    cout << "Enter a natural number -> ";
    cin >> n;

    for (int k = 1; k <= n; k++) {
        sum += 1.0 / pow((2 * k + 1), 2);
    }
    cout << "-----------------------------" << endl;

    cout << "Sum -> " << sum << endl;

    cout << "-----------------------------" << endl;

    return 0;
}
