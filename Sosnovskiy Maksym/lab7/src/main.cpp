#include <iostream>
#include <string>

using namespace std;

int main() {
    // Laboratory Work #7
    // Student: Sosnovskiy Maksym
    // Group: KN-11
    // Variant: 13

    cout << "Laboratory Work #7: Strings in C++" << endl;
    cout << "Variant 13: String length and manipulation" << endl;
    cout << "------------------------------------------" << endl;

    string userName;
    cout << "Enter your last name: ";
    cin >> userName;

    // Task: Calculate the number of characters in the string
    int length = userName.length();

    cout << "------------------------------------------" << endl;
    cout << "Hello, " << userName << "!" << endl;
    cout << "Your last name contains " << length << " characters." << endl;

    return 0;
}
