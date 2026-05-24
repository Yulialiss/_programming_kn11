#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    // Лабораторна робота №2 (АСД)
    // Студент: Сосновський Максим, КН-11
    // Варіант: 13
    
    srand(time(0));
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size!" << endl;
        return 1;
    }

    int* arr = new int[n];
    cout << "Generated array: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 31 - 10; // Генерація чисел від -10 до 20
        cout << arr[i] << " ";
    }
    cout << endl;

    int sum = 0;
    bool negativeFound = false;
    int limitIndex = n;

    // Шукаємо індекс першого від'ємного елемента
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            negativeFound = true;
            limitIndex = i;
            break;
        }
    }

    // Рахуємо суму елементів з непарними індексами до limitIndex
    for (int i = 1; i < limitIndex; i += 2) {
        sum += arr[i];
    }

    cout << "---------------------------------------" << endl;
    if (negativeFound) {
        cout << "First negative element found at index: " << limitIndex << " (" << arr[limitIndex] << ")" << endl;
    } else {
        cout << "No negative elements found. Calculated for the entire array." << endl;
    }
    cout << "Sum of elements with odd indices before it: " << sum << endl;

    delete[] arr;
    return 0;
}
