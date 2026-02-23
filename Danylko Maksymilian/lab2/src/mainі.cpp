#include <iostream>

using namespace std;

int main() {

    float x;
    float n;

    cout << "Enter x: ";
    cin >> x;

    if (x <= -3) {
        n = 9;
    }
    else {
        n = x / (x * x +1);
    }
    cout << "Result:" << n;

    return 0;
}

