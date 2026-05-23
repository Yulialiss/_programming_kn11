#include <iostream>

using namespace std;

// Function to find the maximum of two numbers
double findMax(double num1, double num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    // Laboratory Work #6
    // Student: Sosnovskiy Maksym
    // Group: KN-11
    // Variant: 13

    cout << "Laboratory Work #6: Functions in C++" << endl;
    cout << "Variant 13: Finding the maximum value" << endl;
    cout << "--------------------------------------" << endl;

    double n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    // Calling the function
    double maxVal = findMax(n1, n2);

    cout << "--------------------------------------" << endl;
    cout << "Result from function: The maximum is " << maxVal << endl;

    return 0;
}
