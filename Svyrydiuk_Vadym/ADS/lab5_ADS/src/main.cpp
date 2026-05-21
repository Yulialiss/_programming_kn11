#include <iostream>

using namespace std;

// функція обміну двох елементів місцями
void swap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

// функція розподілу Ломуто
int partition(int arr[], int low, int high) {

    // опорний елемент
    int pivot = arr[high];

    // індекс для більших елементів
    int i = low - 1;

    // прохід по масиву
    for (int j = low; j < high; j++) {

        // для сортування за спаданням
        if (arr[j] >= pivot) {

            i++;

            // обмін елементів
            swap(arr[i], arr[j]);
        }
    }

    // встановлення pivot на правильне місце
    swap(arr[i + 1], arr[high]);

    // повернення позиції pivot
    return i + 1;
}

// рекурсивна функція швидкого сортування
void quickSort(int arr[], int low, int high) {

    // перевірка меж масиву
    if (low < high) {

        // індекс pivot після розподілу
        int pi = partition(arr, low, high);

        // сортування лівої частини
        quickSort(arr, low, pi - 1);

        // сортування правої частини
        quickSort(arr, pi + 1, high);
    }
}

int main() {

    int n;

    // введення кількості елементів
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    // введення елементів масиву
    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // виклик швидкого сортування
    quickSort(arr, 0, n - 1);

    // виведення відсортованого масиву
    cout << "Sorted array:\n";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}