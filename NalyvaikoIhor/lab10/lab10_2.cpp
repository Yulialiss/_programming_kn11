#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cout << "Vvedit slovo: ";
    cin >> word;

    int n = word.length();
    // Створюємо масив вказівників на символи (char*)
    char** ptrArray = new char*[n];

    // Ініціалізація масиву вказівників адресами літер слова
    for (int i = 0; i < n; i++) {
        ptrArray[i] = &word[i];
    }

    // Сортування вказівників за кодами символів (Метод бульбашки)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Порівнюємо значення, на які вказують вказівники (*ptrArray)
            if (*ptrArray[j] > *ptrArray[j + 1]) {
                // Міняємо місцями самі вказівники (адреси)
                char* temp = ptrArray[j];
                ptrArray[j] = ptrArray[j + 1];
                ptrArray[j + 1] = temp;
            }
        }
    }

    // Вивід посортованих літер через розіменування вказівників
    cout << "Posortovani literi: ";
    for (int i = 0; i < n; i++) {
        cout << *ptrArray[i];
    }
    cout << endl;

    // Звільнення динамічної пам'яті
    delete[] ptrArray;

    return 0;
}