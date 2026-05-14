#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Car
{
    string marka;
    string number;
    string color;
    int year;
    string owner;
    string street;
    int house;
};

void add()
{
    ofstream file("cars.txt", ios::app);

    Car auto_0;

    cout << "Marka: ";
    cin >> auto_0.marka;

    cout << "Number: ";
    cin >> auto_0.number;

    cout << "Color: ";
    cin >> auto_0.color;

    cout << "Year: ";
    cin >> auto_0.year;

    cin.ignore();

    cout << "Owner: ";
    getline(cin, auto_0.owner);

    cout << "Street: ";
    getline(cin, auto_0.street);

    cout << "House: ";
    cin >> auto_0.house;

    file << auto_0.marka << endl
         << auto_0.number << endl
         << auto_0.color << endl
         << auto_0.year << endl
         << auto_0.owner << endl
         << auto_0.street << endl
         << auto_0.house << endl;

    file.close();
}

void show()
{
    ifstream file("cars.txt");

    Car auto_0;

    while (file >> auto_0.marka)
    {
        file >> auto_0.number >> auto_0.color >> auto_0.year;
        file.ignore();
        getline(file, auto_0.owner);
        getline(file, auto_0.street);
        file >> auto_0.house;

        cout << auto_0.marka << " " << auto_0.number << " " << auto_0.color << " "
            << auto_0.year << " " << auto_0.owner << " " << auto_0.street << " " << auto_0.house << endl;
    }

    file.close();
}

void search()
{
    ifstream file("cars.txt");

    Car auto_0, result[100];
    int n = 0;

    string marka, street;

    cin.ignore();

    cout << "Search marka: ";
    getline(cin, marka);

    cout << "Search street: ";
    getline(cin, street);

    while (file >> auto_0.marka)
    {
        file >> auto_0.number >> auto_0.color >> auto_0.year;
        file.ignore();
        getline(file, auto_0.owner);
        getline(file, auto_0.street);
        file >> auto_0.house;

        if (auto_0.marka == marka && auto_0.street == street)
            result[n++] = auto_0;
    }

    file.close();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (result[j].owner > result[j + 1].owner)
            {
                Car t = result[j];
                result[j] = result[j + 1];
                result[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << result[i].owner << " " << result[i].marka << " " << result[i].street << endl;
}

int main()
{
    int k;

    do
    {
        cout << "1 Add" << endl;
        cout << "2 Show" << endl;
        cout << "3 Search" << endl;
        cout << "4 Exit" << endl;

        cin >> k;

        switch (k)
        {
        case 1: add(); break;
        case 2: show(); break;
        case 3: search(); break;
        }

    } while (k != 4);

    return 0;
}