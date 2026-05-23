#include <iostream>

using namespace std;

int main() {
    // Laboratory Work #4
    // Student: Sosnovskiy Maksym
    // Group: KN-11
    // Variant: 13

    cout << "Laboratory Work #4: One-dimensional Arrays" << endl;
    cout << "Variant 13: Array processing" << endl;
    cout << "------------------------------------------" << endl;

    const int SIZE = 5;
    int numbers[SIZE];
    int sum = 0;

    cout << "Enter " << SIZE << " integers:" << endl;

    // Input and calculation
    for (int i = 0; i < SIZE; i++) {
        cout << "Element [" << i << "]: ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    double average = static_cast<double>(sum) / SIZE;

    cout << "------------------------------------------" << endl;
    cout << "Results:" << endl;
    cout << "Sum of elements: " << sum << endl;
    cout << "Average value: " << average << endl;

    return 0;
}
