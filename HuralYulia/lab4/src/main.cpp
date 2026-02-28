#include <iostream>
#include <string>
using namespace std;

int main() {
    int a[] = { 1233, 3412, 5566, 2020, 1111, 9876 };
    int n = 6;

    cout << "Є такі числа: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "-------------------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        string s = to_string(a[i]);

        if ((s[0] - '0') + (s[1] - '0') == (s[2] - '0') + (s[3] - '0')) {
            cout << "З них лише у цих сума перших чисел == останніх чисел-> " << a[i] << endl;
        }
    }


    return 0;
}