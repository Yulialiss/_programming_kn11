#include <iostream>
using namespace std;

// Оголошуємо структуру для зберігання дати (рік, місяць, день)
struct Event {
    int year;
    int month;
    int day;
};

int main() {
    int n;
    cout << "Enter number of events: ";
    cin >> n;

    // Створюємо масив на 100 подій
    Event events[100];

    // Блок введення: заповнюємо масив даними з клавіатури
    for (int i = 0; i < n; i++) {
        cin >> events[i].year >> events[i].month >> events[i].day;
    }

    int targetYear;
    cout << "Enter year: ";
    cin >> targetYear;

    // Сортування бульбашкою розставляємо події в хронологічному порядку
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Порівнюємо роки, якщо однакові — місяці, якщо і ті однакові — дні
            if (events[j].year > events[j + 1].year ||
               (events[j].year == events[j + 1].year && events[j].month > events[j + 1].month) ||
               (events[j].year == events[j + 1].year && events[j].month == events[j + 1].month && events[j].day > events[j + 1].day)) {

                // Міняємо місцями сусідні елементи через тимчасову змінну
                Event temp = events[j];
                events[j] = events[j + 1];
                events[j + 1] = temp;
               }
        }
    }

    // Вивід результатів: друкуємо тільки ті події, що відбулися у targetYear
    cout << "Events in year " << targetYear << ":\n";
    for (int i = 0; i < n; i++) {
        if (events[i].year == targetYear) {
            cout << events[i].year << " "
                 << events[i].month << " "
                 << events[i].day << endl;
        }
    }

    return 0;
}
