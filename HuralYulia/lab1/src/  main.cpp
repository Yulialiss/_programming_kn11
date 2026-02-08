#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int variant;

    cout << "Enter your first and last name -> ";
    cin>> name;

    cout << "Enter the variant number -> ";
    cin >> variant;

    cout << "\n============================\n";
    cout << "   Lab 1: First C++ Program\n";
    cout << "   Variant: " << variant << "\n";
    cout << "   Student: " << name << "\n";
    cout << "============================\n";

    cout << "Hello, " << name << "\n";

    return 0;
}
