#include <iostream>
#include <string>

using namespace std;

struct Animal {
    string name;
    double life;
    double speed;
    int population;
};

int main() {
    int n;
    cout << "Enter the number of animals: ";
    cin >> n;

    Animal an[50];

    for (int i = 0; i < n; i++) {
        cout << "\nAnimal #" << i + 1 << ":\n";
        cout << "Name: ";
        cin >> an[i].name;
        cout << "Average life expectancy: ";
        cin >> an[i].life;
        cout << "Speed: ";
        cin >> an[i].speed;
        cout << "Population: ";
        cin >> an[i].population;
    }

    int maxSpeedIndex = 0;

    int minPopIndex = 0;

    for (int i = 1; i < n; i++) {
        if (an[i].speed > an[maxSpeedIndex].speed) {
            maxSpeedIndex = i;
        }
        if (an[i].population < an[minPopIndex].population) {
            minPopIndex = i;
        }
    }

    cout << "\nThe fastest animal: "
        << an[maxSpeedIndex].name
        << " (speed: " << an[maxSpeedIndex].speed << ")\n";

    cout << "The smallest population: "
        << an[minPopIndex].name
        << " (" << an[minPopIndex].population << ")\n";

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (an[j].population < an[j + 1].population) {
                swap(an[j], an[j + 1]);
            }
        }
    }

    cout << "\nAnimals sorted by population\n";
    for (int i = 0; i < n; i++) {
        cout << an[i].name << " | "
            << an[i].life << " | "
            << an[i].speed << " | "
            << an[i].population << "\n";
    }

    return 0;
}