#include <iostream>
#include <vector>
#include <algorithm> // Для використання swap()

using namespace std;

// Функція розділення масиву (Partition)
// Вона вибирає опорний елемент (pivot) і переставляє елементи так, 
// щоб усі більші за pivot опинилися зліва, а менші — справа.
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Вибираємо останній елемент як опорний (pivot)
    int i = (low - 1);     // Індекс елемента, що розділяє "зону більших чисел"

    for (int j = low; j <= high - 1; j++) {
        // Якщо поточний елемент більший за опорний (умова для сортування ЗА СПАДАННЯМ)
        if (arr[j] > pivot) {
            i++; // Збільшуємо межу зони більших чисел
            swap(arr[i], arr[j]); // Переміщуємо більший елемент у ліву частину
        }
    }
    // Ставимо опорний елемент (pivot) на його фінальне місце — одразу після більших чисел
    swap(arr[i + 1], arr[high]);
    
    // Повертаємо індекс опорного елемента, щоб знати, де розділити масив на дві частини
    return (i + 1);
}

// Рекурсивна функція QuickSort
void quickSort(vector<int>& arr, int low, int high) {
    // Умова виходу з рекурсії: якщо індекс початку менший за індекс кінця
    if (low < high) {
        // Отримуємо індекс опорного елемента (він уже на своєму місці)
        int pi = partition(arr, low, high);

        // Рекурсивно сортуємо ліву частину (елементи, більші за pivot)
        quickSort(arr, low, pi - 1);
        
        // Рекурсивно сортуємо праву частину (елементи, менші за pivot)
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n; // Введення кількості елементів

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Заповнення вектора
    }

    // Виклик сортування: передаємо масив, початковий індекс (0) та кінцевий (n-1)
    quickSort(arr, 0, n - 1);

    cout << "Sorted array (Descending): ";
    for (int x : arr) {
        cout << x << " "; // Виведення результату
    }
    cout << endl;

    return 0;
}
