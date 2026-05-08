#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Функція для знаходження НСД двох чисел за алгоритмом Евкліда (через остачу від ділення)
int getGCD(int a, int b) {
    while (b != 0) {
        a %= b;      // Знаходимо остачу
        swap(a, b);  // Міняємо місцями
    }
    return a;
}

// Функція для знаходження НСД цілого масиву
// skipIdx — індекс елемента, який ми хочемо проігнорувати (за замовчуванням -1, тобто нічого не пропускати)
int findArrayGCD(const vector<int>& arr, int skipIdx = -1) {
    int res = -1; // Тимчасове значення для першого знайденого числа
    for (int i = 0; i < (int)arr.size(); i++) {
        if (i == skipIdx) continue; // Пропускаємо елемент, якщо він позначений як skipIdx
        
        if (res == -1) res = arr[i]; // Перше число стає початковим НСД
        else res = getGCD(res, arr[i]); // Для всіх наступних шукаємо спільний НСД
    }
    return res;
}

int main() {
    int n;
    cout << "Enter the number of elements N: ";
    cin >> n;

    // Перевірка на коректність розміру
    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // ОСНОВНЕ ЗАВДАННЯ: Знаходимо НСД усіх елементів масиву
    int fullGCD = findArrayGCD(arr);
    cout << "\n1. GCD of all elements: " << fullGCD << endl;

    // ДОДАТКОВЕ ЗАВДАННЯ: Перевіряємо, чи видалення одного числа збільшує НСД
    bool found = false;
    cout << "2. Checking if removing an element increases GCD..." << endl;

    for (int i = 0; i < n; i++) {
        // Рахуємо НСД масиву без поточного елемента з індексом i
        int newGCD = findArrayGCD(arr, i);
        
        // Якщо новий НСД більший за той, що був у повному масиві
        if (newGCD > fullGCD) {
            cout << "Yes! Removing [" << arr[i] << "] increases GCD to: " << newGCD << endl;
            found = true;
            break; // Зупиняємо пошук після першого успішного результату
        }
    }

    // Якщо пройшли весь цикл і не знайшли жодного варіанту
    if (!found) {
        cout << "No, removing any single element won't increase the GCD." << endl;
    }

    return 0;
}
