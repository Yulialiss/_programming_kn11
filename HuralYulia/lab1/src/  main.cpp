#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int variant;

    cout << "Введіть своє ім'я та прізвище-> ";
    cin>> name;

    cout << "Введіть номер варіанту-> ";
    cin >> variant;

    cout << "\n============================\n";
    cout << "       Lab 1: First C++ Program\n";
    cout << "       Variant: " << variant << "\n";
    cout << "       Student: " << name << "\n";
    cout << "============================\n";

    cout << "Привіт, " << name << "\n";

    return 0;
}
