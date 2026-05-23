#include <iostream>

using namespace std;

int main() {
    // Laboratory Work #9
    // Student: Sosnovskiy Maksym
    // Group: KN-11
    // Variant: 13

    cout << "Laboratory Work #9: Pointers in C++" << endl;
    cout << "Variant 13: Memory addresses and pointers" << endl;
    cout << "------------------------------------------" << endl;

    int value = 100;
    int* ptr = &value; // Pointer stores the address of 'value'

    cout << "Original value: " << value << endl;
    cout << "Memory address: " << ptr << endl;

    // Changing the value using the pointer (dereferencing)
    *ptr = 13; 

    cout << "------------------------------------------" << endl;
    cout << "Updated value via pointer: " << value << endl;
    cout << "New value matches variant number: " << *ptr << endl;

    return 0;
}
