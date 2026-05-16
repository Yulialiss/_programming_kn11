#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Car {
    string brand;
    string number;
    string color;
    int year;
    string owner;
    string address;
};

void Add() {
    ofstream file("cars.txt", ios::app);
    Car c;

    cout << "Brand: ";
    cin >> c.brand;
    cout << "Number: ";
    cin >> c.number;
    cout << "Color: ";
    cin >> c.color;
    cout << "Year: ";
    cin >> c.year;
    cin.ignore(100, '\n');
    cout << "Owner: ";
    getline(cin, c.owner);
    cout << "Address: ";
    getline(cin, c.address);

    file << c.brand << endl << c.number << endl << c.color << endl << c.year << endl << c.owner << endl << c.address << endl;

    file.close();
}

void Show() {
    ifstream file("cars.txt");
    Car c;

    while (file >> c.brand) {
        file >> c.number >> c.color >> c.year;
        file.ignore();

        getline(file, c.owner);
        getline(file, c.address);

        cout << c.brand << "" << c.number << "" << c.color << "" << c.year << "" << c.owner << "" << c.address << endl;
    }

    file.close();
}

void Change() {
    ifstream file("cars.txt");
    Car c, cars[100];
    int count = 0;

    while (file >> c.brand) {
        file >> c.number >> c.color >> c.year;
        file.ignore();

        getline(file, c.owner);
        getline(file, c.address);

        cars[count++] = c;
    }

    file.close();

    string number;
    cout << "Enter number to change: " << endl;
    cin >> number;

    for (int i = 0; i < count; i++) {
        if (cars[i].number == number) {
            cout << "New color: " << endl;
            cin >> cars[i].color;
        }
    }

    ofstream out("cars.txt");
    for (int i = 0; i < count; i++) {
        out << cars[i].brand << endl << cars[i].number << endl << cars[i].color << endl << cars[i].year << endl << cars[i].owner << endl << cars[i].address << endl;
    }

    out.close();
}

void Search() {
    ifstream file("cars.txt");
    Car c;
    string color;

    cin.ignore(100, '\n');
    cout << "Enter color: " << endl;
    getline(cin, color);
    cout << endl << "Result: " << endl;

    while (file >> c.brand) {
        file >> c.number >> c.color >> c.year;
        file.ignore();
        getline(file, c.owner);
        getline(file, c.address);

        if (c.color == color && c.number.size() >= 2 && c.number[0] == '7' && c.number[1] == '7') {
            cout << "Owner: " << c.owner << endl;
            cout << "Address: " << c.address << endl;
            cout << endl;
        }
    }

    file.close();
}

int main() {
    int choice;

    do {
        cout << endl;
        cout << "        Car management system        " << endl;
        cout << endl << endl;

        cout << "1. Add car" << endl;
        cout << "2. Show cars" << endl;
        cout << "3. Change car" << endl;
        cout << "4. Search cars" << endl;
        cout << "5. Exit" << endl;

        cout << endl << "      Choose option:      " << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            cout << endl << "      Add car      " << endl;
            cout << endl;
            Add();
            break;

        case 2:
            cout << endl << "      All cars      " << endl;
            cout << endl;
            Show();
            break;

        case 3:
            cout << endl << "      Change car      " << endl;
            cout << endl;
            Change();
            break;

        case 4:
            cout << endl << "      Search cars      " << endl;
            cout << endl;
            Search();
            break;
        }

    } while (choice != 5);

    return 0;
}