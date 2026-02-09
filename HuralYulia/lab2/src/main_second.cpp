#include <iostream>

using namespace std;

int main() {

    float x;
    float n;

    cout << "Enter x: ";
    cin >> x;

    if (x <= 3) {
        n = (x * x + 3 * x + 9);
    }
    else {
        n = x / (x * x * x - 6);
    }
    cout << "..............................\n";
    cout << "Result (n) -> " << n;
    cout << "\n..............................\n";

    return 0;
}

