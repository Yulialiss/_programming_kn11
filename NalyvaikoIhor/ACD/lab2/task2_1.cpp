#include <iostream>
#include <ctime>    // Для функції time()
#include <cstdlib>  // Для функцій srand() та rand()

using namespace std;

int main() {
    const int N = 100; // Максимальний фізичний розмір масиву
    int arr[N];
    int n, A, B;

    // Введення параметрів від користувача
    cout << "Enter count (n <= 100): ";
    cin >> n; // Скільки елементів реально використати
    cout << "Enter range (A B): ";
    cin >> A >> B; // Діапазон значень (від A до B)

    // Ініціалізація генератора випадкових чисел поточним часом
    srand(time(0));
    
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        // Формула для генерації числа в діапазоні [A, B]
        arr[i] = A + rand() % (B - A + 1);
        cout << arr[i] << " ";
    }
    cout << endl;

    // Пошук індексів мінімального та максимального елементів
    int minIdx = 0, maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIdx]) minIdx = i; // Запам'ятовуємо індекс найменшого
        if (arr[i] > arr[maxIdx]) maxIdx = i; // Запам'ятовуємо індекс найбільшого
    }

    // Визначаємо межі: що йде раніше — MIN чи MAX
    // Використовуємо тернарний оператор (умова ? значення_якщо_так : значення_якщо_ні)
    int start = (minIdx < maxIdx) ? minIdx : maxIdx;
    int end = (minIdx > maxIdx) ? minIdx : maxIdx;

    cout << "Between MIN and MAX: ";
    
    // Перевірка, чи є елементи між знайденими індексами
    if (start + 1 >= end) {
        cout << "no elements";
    } else {
        // Цикл виводить елементи, не включаючи самі MIN та MAX
        for (int i = start + 1; i < end; i++) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
