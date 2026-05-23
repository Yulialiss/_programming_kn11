#include <iostream>

using namespace std;

int main() {
    // Laboratory Work #2
    // Student: Sosnovskiy Maksym
    // Group: KN-11
    // Variant: 13

    double a, b, c;

    cout << "Laboratory Work #2: Data Types and Conditional Operators" << endl;
    cout << "Variant 13: Check for equal numbers" << endl;
    cout << "------------------------------------" << endl;

    cout << "Enter three numbers:" << endl;
    cout << "a = "; 
    cin >> a;
    cout << "b = "; 
    cin >> b;
    cout << "c = "; 
    cin >> c;

    // Task: Check if at least one pair of numbers is equal
    if (a == b || b == c || a == c) {
        cout << "Result: There are equal numbers in the set." << endl;
    } else {
        cout << "Result: All numbers are different." << endl;
    }

    return 0;
}
