#include <iostream>

using namespace std;

int main() {
    int n; // вводимо зміну n, що відповідатиме за кількість елементів у масиві

    cout << "Enter the number of array elements: ";
    cin >> n; // зчитуємо розмір масиву

    int numbers[100]; // вводимо масив для зберігання чисел

    cout << "Enter the array elements: ";

    // Вводимо за допомогою цикла елементи масиву //
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    int minIndex, temp; // створюємо змінні для індекса мінімального елемента та обміну елементів

    cout << endl << "Initial array: ";

    // Вивід початкового масиву //
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }

    // Алгоритм сортування вибіркою //
    for (int i = 0; i < n - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (numbers[j] < numbers[minIndex]) {
                minIndex = j;
            }
        }
        temp = numbers[i]; // обмін місцями поточного і мінімального елементів за правилом трикутника
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = temp;
    }
    cout << endl << "Sorted array: ";

    // Вивід відсортованого масиву //
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}