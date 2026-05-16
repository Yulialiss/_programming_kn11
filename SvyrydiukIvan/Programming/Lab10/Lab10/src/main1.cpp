#include <iostream>
using namespace std;

int main() {
    char line[100];

    cout << "Enter text: ";
    cin.getline(line, 100);
    cout << endl;

    char* marks[50];
    int k = 0;
    int size = 0;

    for (char* temp = line; *temp != 0; temp++) {
        size++;
    }

    for (char* temp = line; temp < line + size; temp++) {
        if (*temp == '.' || *temp == ',' || *temp == '!' || *temp == '?') {
            marks[k++] = temp;
        }
    }

    for (int i = 0; i < k - 1; i++) {
        char* start = marks[i];
        char* end = marks[i + 1];

        while (start <= end) {
            cout << *start;
            start++;
        }
        cout << endl;
    }

    return 0;
}