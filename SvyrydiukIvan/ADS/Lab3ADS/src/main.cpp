#include <iostream>

using namespace std;

// Головна функція //
int main() {
    int a, b; // Вводимо дві змінні для чисел

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << endl;

    // Зберігаємо значення чисел в нових змінних для подальшого підрахунку НСК //
    int A = a;
    int B = b;

    cout << "      Euclidean algorithm iteration table      " << endl; // Виводимо результат кожної ітерації у вигляді таблиці
    cout << "a" << "\t" << "b" << "\t" << "a mod b" << endl;

    // Створюємо алгоритм Евкліда для визначення НСД //
    while (b != 0) {
        cout << a << "\t" << b << "\t" << a % b << endl;

        int temp = b; 
        b = a % b;
        a = temp;
    }
    cout << a << "\t" << b << "\t" << "-" << "\n";

    int GCD = a; // Ініціалізуємо отриманий результат a в НСД
    int LCM = (A * B)/GCD; // Обчислюємо НСК через наявну формулу

    cout << endl << "GCD = " << GCD << endl << "LCM = " << LCM << endl; // Виводимо отримані значення НСД та НСК

    return 0;
}