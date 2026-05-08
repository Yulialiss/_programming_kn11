#include <iostream> // Бібліотека для введення та виведення даних (cout, cin)
#include <cmath>    // Бібліотека для математичних функцій (sin, pow)
#include <iomanip>  // Бібліотека для маніпуляцій виводом (setw, setprecision)

using namespace std;

int main() {
    double a, b, h; // Оголошення змінних для меж інтервалу та кроку

    cout << "--- Zavdannya 1: Tabulyuvannya ---" << endl;
    cout << "Vvedit pochatok (a): "; cin >> a; // Початок інтервалу
    cout << "Vvedit kinec (b): "; cin >> b;   // Кінець інтервалу
    cout << "Vvedit krok (h): "; cin >> h;    // Крок приросту аргументу

    double dobutok = 1.0; // Змінна для накопичення добутку (початкове значення 1)
    bool found = false;   // Прапорець, щоб знати, чи знайшли ми хоча б одне y > 1

    // Форматування заголовка таблиці: setw(10) задає ширину колонки
    cout << "\n" << setw(10) << "x" << " | " << setw(10) << "y" << endl;
    cout << "---------------------------" << endl;

    // Цикл табулювання: починаємо з 'a', йдемо до 'b' з кроком 'h'
    // Додаємо h/10 до умови, щоб уникнути помилок точності double
    for (double x = a; x <= b + h/10; x += h) {
        
        // Обчислення функції за формулою: y = x * sin^2(x) + 1
        double y = x * pow(sin(x), 2) + 1;

        // Виведення значень x та y з фіксованою точкою (2 знаки після коми)
        cout << setw(10) << fixed << setprecision(2) << x
             << " | " << setw(10) << y << endl;

        // Перевірка умови: якщо значення функції більше одиниці
        if (y > 1) {
            dobutok *= y; // Множимо поточне значення на попередній результат
            found = true; // Позначаємо, що підходяще значення знайдено
        }
    }

    // Виведення фінального результату
    if (found)
        cout << "\nDobutok y > 1: " << dobutok << endl;
    else
        cout << "\nZnachen y > 1 ne znaydeno" << endl;

    return 0; // Успішне завершення програми
}
