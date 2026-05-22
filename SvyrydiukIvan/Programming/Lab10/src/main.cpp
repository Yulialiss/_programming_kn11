#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "Enter size of the string: ";
    cin >> size;
    
    char* text = new char[size + 1];
    cout << "Enter a string: ";

    cin.ignore();
    cin.getline(text, size + 1);

    int &length = size;
    char* temp = text;

    for (int i = 0; i < length - 2; i++) {
        if (*(temp + i) == 'S' && *(temp + i + 2) == '1') {
            cout << endl << "Condition is met" << endl;

            delete[] text;
            return 0;
        }
    }
    cout << endl << "Condition is not met" << endl;

    delete[] text;
    return 0;
}