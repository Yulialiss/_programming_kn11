#include <iostream>
#include <string>

using namespace std;

int main() {
    // Використання динамічного рядка (string) або масиву char
    string input;
    cout << "Vvedit radok: ";
    getline(cin, input);

    int count = 0;
    const char* ptr = input.c_str(); // Вказівник на початок рядка

    // Перевірка першого символу рядка
    if (*ptr == 'a' || *ptr == 'A') {
        count++;
    }

    // Прохід по рядку вказівником
    while (*ptr != '\0') {
        // Якщо зустріли пробіл, перевіряємо наступний символ (початок нового слова)
        if (*ptr == ' ' && (*(ptr + 1) == 'a' || *(ptr + 1) == 'A')) {
            count++;
        }
        ptr++; // Зміщення вказівника на наступний байт
    }

    cout << "Kilkist sliv na 'a': " << count << endl;

    return 0;
}