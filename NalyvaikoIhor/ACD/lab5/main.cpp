#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Функція розділення масиву (Partition)
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Опорний елемент
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        // Умова для сортування ЗА СПАДАННЯМ
        if (arr[j] > pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Рекурсивна функція QuickSort
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Ліва частина
        quickSort(arr, pi + 1, high); // Права частина
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    quickSort(arr, 0, n - 1);

    cout << "Sorted array (Descending): ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}