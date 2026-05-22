#include <iostream>
#include <string>

using namespace std;
const int N = 100;

// Стек
struct Stack {
    int S[N]; // масив
    int top;  // кількість елементів

    // конструктор
    Stack() {
        top = 0;
    }

    // додати елемент
    bool Push(int x) {
        // перевірка переповнення
        if (top == N)
            return false;

        S[top] = x;
        top++;

        return true;
    }

    // видалити елемент
    int Pop(bool& ok) {
        // перевірка порожнього стеку
        if (top == 0) {
            ok = false;
            return 0;
        }

        top--;
        ok = true;

        return S[top];
    }

    // кількість елементів
    int Size() {
        return top;
    }

    // очистити стек
    void Clear() {
        top = 0;
    }

    // вивести стек
    void Show() {
        // якщо стек порожній
        if (top == 0) {
            cout << "Stack is empty\n";
            return;
        }

        cout << "Stack: ";

        // вивід елементів
        for (int i = 0; i < top; i++)
            cout << S[i] << " ";

        cout << endl;
    }
};

// індивідуальне завдання
void Task() {
    string s;

    cout << "Enter expression: ";
    cin.ignore();
    getline(cin, s);

    Stack A;
    bool ok;

    cout << "\nPositions:\n";

    // прохід по рядку
    for (int i = 0; i < s.length(); i++) {
        // якщо відкриваюча дужка
        if (s[i] == '[') {
            // зберігаємо позицію
            A.Push(i + 1);
        }

        // якщо закриваюча дужка
        if (s[i] == ']') {
            // беремо останню відкриваючу
            int open = A.Pop(ok);

            // вивід пари дужок
            if (ok)
                cout << open << " " << i + 1 << endl;
        }
    }
}

int main() {
    Stack A;

    int k, x;
    bool ok;

    do {
        // меню
        cout << "\n1 Push";
        cout << "\n2 Pop";
        cout << "\n3 Show";
        cout << "\n4 Size";
        cout << "\n5 Clear";
        cout << "\n6 Task";
        cout << "\n7 Exit\n";

        cin >> k;

        switch (k) {
        case 1:
            // додавання елемента
            cout << "Enter number: ";
            cin >> x;

            if (A.Push(x))
                cout << "Added\n";
            else
                cout << "Stack overflow\n";

            break;

        case 2:
            // видалення елемента
            x = A.Pop(ok);

            if (ok)
                cout << "Deleted: " << x << endl;
            else
                cout << "Stack underflow\n";

            break;

        case 3:
            // показати стек
            A.Show();
            break;

        case 4:
            // кількість елементів
            cout << "Size: " << A.Size() << endl;
            break;

        case 5:
            // очистка стеку
            A.Clear();
            cout << "Stack cleared\n";
            break;

        case 6:
            // індивідуальне завдання
            Task();
            break;

        case 7:
            cout << "End\n";
            break;

        default:
            cout << "Wrong choice\n";
        }

    } while (k != 7);

    return 0;
}