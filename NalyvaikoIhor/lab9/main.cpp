#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Функція видалення слова з рядка
string removeWord(string line, string word) {
    size_t pos;
    while ((pos = line.find(word)) != string::npos) {
        line.erase(pos, word.length());
    }
    return line;
}

int main() {
    ofstream out1("text_1.txt");
    string line;

    cout << "Enter lines (type END to stop):\n";

    // Запис у text_1.txt
    while (true) {
        getline(cin, line);
        if (line == "END") break;
        out1 << line << endl;
    }
    out1.close();

    string word;
    cout << "Enter word to remove: ";
    cin >> word;

    ifstream in1("text_1.txt");
    ofstream out2("text_2.txt");

    // Обробка файлу
    while (getline(in1, line)) {
        line = removeWord(line, word);
        out2 << line << endl;
    }

    in1.close();
    out2.close();

    // Вивід text_2.txt
    ifstream in2("text_2.txt");

    cout << "\nResult (text_2.txt):\n";
    while (getline(in2, line)) {
        cout << line << endl;
    }

    in2.close();

    return 0;
}