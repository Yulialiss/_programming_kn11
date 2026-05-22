#include <iostream>
#include <string>

using namespace std;

const int N = 100; // максимальний можливий розмір стека

// Стек (структура даних) //
struct Stack {
    int topS; // індекс вершини стека
    char S[N]; // масив для зберігання елементів

    // Ініціалізація стека як порожнього //
    Stack() {
        topS = -1;
    }

    // Додавання елемента у стек //
    bool Push(char x) {
        if (topS >= N - 1) // перевірка чи не переповнений стек
            return false;

        S[++topS] = x;

        return true;
    }

    // Видалення верхнього елемента //
    char Pop(bool& kv) {
        if (topS < 0) { // перевірка: чи стек не порожній
            kv = false;
            return 0;
        }

        kv = true;

        return S[topS--]; // беремо верхній елемент і зменшуємо стек
    }

    // Кількість елементів у стеку //
    int sizeStack() {
        return topS + 1;
    }

    // Очищення нашого стека //
    void clearStack() {
        topS = -1;
    }

    // Виведення всіх елементів що лежать в стеку //
    void StackScreen() {
        if (topS < 0) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Stack elements: ";

        for (int i = 0; i <= topS; i++) {
            cout << S[i] << " ";
        }
        cout << endl;
    }
};

// Перевірка функції Паліндрому //
void CheckPalindr() {
    Stack st;

    string text;       // оригінальний рядок та без пробілів
    string clean = "";

    cout << "Enter string: ";
    cin.ignore(1000, '\n');

    getline(cin, text);

    // Видаляємо пробіли, бо паліндром їх ігнорує //
    for (int i = 0; i < text.size(); i++) {
        if (text[i] != ' ') {
            clean += text[i];
        }
    }

    for (int i = 0; i < clean.size(); i++) { // записуємо всі символи у стек
        st.Push(clean[i]);
    }

    bool ok = true;
    bool kv;

    cout << endl << "Comparison: " << endl;

    // Порівнюємо символи з початку і з кінця через стек //
    for (int i = 0; i < clean.size(); i++) {
        char left = clean[i];     // символ зліва
        char right = st.Pop(kv);  // символ справа

        cout << left << "\t" << right << endl;

        if (left != right) { // якщо щось не співпаде значить не паліндром
            ok = false;
        }
    }

    // Результат перевірки //
    if (ok) {
        cout << endl << "Result: Palindrome" << endl;
    }
    else {
        cout << endl << "Result: NOT Palindrome" << endl;
    }
}

// Меню //
int main() {
    Stack st;

    int choice;  // варіант вибору меню
    char x;

    do {
        cout << "        MENU        " << endl;
        cout << "1. Push element" << endl;
        cout << "2. Pop element" << endl;
        cout << "3. Show stack" << endl;
        cout << "4. Stack size" << endl;
        cout << "5. Clear stack" << endl;
        cout << "6. Check palindrome" << endl;
        cout << "7. Exit" << endl;
        cout << "Choose: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "Enter symbol: ";
            cin >> x;

            if (st.Push(x)) cout << "Element added successfully" << endl;
            else cout << "Stack overflow" << endl;

            break;
        }

        case 2: {
            bool kv;
            char r = st.Pop(kv);

            if (kv) cout << "Removed: " << r << endl;
            else cout << "Stack is empty" << endl;

            break;
        }

        case 3:
            st.StackScreen();
            break;

        case 4:
            cout << "Size: " << st.sizeStack() << endl;
            break;

        case 5:
            st.clearStack();
            cout << "Stack cleared" << endl;
            break;

        case 6:
            CheckPalindr();
            break;

        case 7:
            cout << "Program finished" << endl;
            break;

        default:
            cout << "Wrong choice" << endl;
        }

    } while (choice != 7);

    return 0;
}