#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

// Функція сортування вибіркою (Selection Sort)
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        // Пошук мінімального елемента в невідсортованій частині
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Обмін знайденого мінімального елемента з першим елементом
        swap(arr[min_idx], arr[i]);
    }
}

int main() {
    // Лабораторна робота №5 (АСД)
    // Студент: Сосновський Максим, КН-11
    // Варіант: 13
    
    srand(time(0));
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Випадкові числа від 0 до 99
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr);

    cout << "---------------------------------------" << endl;
    cout << "Sorted array (Selection Sort): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
