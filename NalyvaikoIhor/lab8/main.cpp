#include <iostream>
using namespace std;

struct Event {
    int year;
    int month;
    int day;
};

int main() {
    int n;
    cout << "Enter number of events: ";
    cin >> n;

    Event events[100];

    // Ввід
    for (int i = 0; i < n; i++) {
        cin >> events[i].year >> events[i].month >> events[i].day;
    }

    int targetYear;
    cout << "Enter year: ";
    cin >> targetYear;

    // Бульбашка
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (events[j].year > events[j + 1].year ||
               (events[j].year == events[j + 1].year && events[j].month > events[j + 1].month) ||
               (events[j].year == events[j + 1].year && events[j].month == events[j + 1].month && events[j].day > events[j + 1].day)) {

                Event temp = events[j];
                events[j] = events[j + 1];
                events[j + 1] = temp;
               }
        }
    }

    // Вивід
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