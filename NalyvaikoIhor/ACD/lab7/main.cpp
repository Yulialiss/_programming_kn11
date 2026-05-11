#include <iostream>
#include <string>

using namespace std;

// Константа N для розміру масиву згідно з методичкою
const int N = 100;

// Структура стека на базі статичного масиву [cite: 263, 264]
struct my_stack {
    char S[N];     // Масив для збереження елементів стека [cite: 267]
    int topS;      // Індекс вершини стека [cite: 266]

    // Конструктор: встановлює початкове значення topS = 0 [cite: 209, 276]
    my_stack() {
        topS = 0;
    }

    // Додати елемент до стека [cite: 270, 278]
    bool Push(char x) {
        if (topS == N) return false; // Обробка переповнення (stack overflow) [cite: 209]
        S[topS++] = x;
        return true;
    }

    // Вилучити елемент зі стека та повернути його [cite: 271, 279]
    char Pop(bool &kv) {
        if (topS == 0) {
            kv = false; // Помилка: стек порожній (stack underflow) [cite: 210, 290]
            return ' ';
        }
        kv = true;
        return S[--topS]; // Повертаємо символ [cite: 208]
    }

    // Повернути кількість елементів у стеці [cite: 273, 283]
    int sizeStack() {
        return topS;
    }
};

// Функція для виконання індивідуального завдання Варіанту 10 [cite: 258, 468]
void individualTask() {
    string input;
    cout << "Vvedit ryadok: ";
    cin >> input;

    int starPos = -1;
    int countStars = 0;

    // Перевірка наявності та кількості символу '*' [cite: 472]
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '*') {
            starPos = i;
            countStars++;
        }
    }

    if (countStars != 1) {
        cout << "Pomylka: symvol '*' mae buty odyn." << endl; // [cite: 473]
        return;
    }

    my_stack A; // Створення екземпляру стека [cite: 294]

    // Заповнюємо стек лівою частиною рядка (до зірочки) [cite: 470]
    for (int i = 0; i < starPos; i++) {
        A.Push(input[i]);
    }

    cout << "\nTablytsya vidpovidnosti:\n";
    bool isSymmetric = true;
    int leftPos = starPos;     // Позиція символу зліва
    int rightPos = starPos + 2; // Позиція символу справа (рахуємо з 1)

    // Перевірка симетричності відносно '*' [cite: 471, 474]
    for (int i = starPos + 1; i < input.length(); i++) {
        bool kv;
        char leftChar = A.Pop(kv); // Витягуємо символ (LIFO) [cite: 192]
        char rightChar = input[i];

        cout << leftPos << " " << rightPos << " ";

        if (kv && leftChar == rightChar) {
            cout << leftChar << endl;
        } else {
            isSymmetric = false;
            // Виводимо пару символів у разі порушення симетрії [cite: 478]
            if (kv) cout << leftChar << rightChar << endl;
            else cout << rightChar << endl;
        }
        leftPos--;
        rightPos++;
    }

    // Якщо в стеці ще залишилися символи, симетрія порушена
    if (A.sizeStack() != 0) isSymmetric = false;

    // Висновок про симетричність [cite: 474, 479]
    if (isSymmetric) cout << "Visnovok: ryadok symetrychnyi" << endl;
    else cout << "Visnovok: ryadok nesymetrychnyi" << endl;
}

int main() {
    int choice;
    do {
        // Меню згідно з обов'язковими вимогами [cite: 242, 252]
        cout << "\n--- MENU ---\n";
        cout << "1. Perevirka ryadka (Variant 10)\n";
        cout << "7. Zavershennya roboty\n";
        cout << "Vash vybir: ";
        cin >> choice;

        if (choice == 1) individualTask();
    } while (choice != 7); // Можливість неодноразового виконання [cite: 253]

    return 0;
}