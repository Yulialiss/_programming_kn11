#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool IsLetter(char symbol) {
    return (symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z');
}

int main() {
    ofstream file1("text_1.txt");
    cout << "Enter a set of words: ";

    string line;

    while (true) {
        getline(cin, line);
        if (line == "") break;
        file1 << line << endl;
    }

    file1.close();

    ifstream file2("text_1.txt");
    if (!file2) {
        cout << "Error: file can't be opened!" << endl;
        return 0;
    }

    int NumbofWord[17] = {0};
    string words[17][100];
    string ActualWord = "";
    char symbol;

    while (file2.get(symbol)) {

        if (IsLetter(symbol)) {
            ActualWord += symbol;
        }
        else {
            if (ActualWord != "") {
                int length = ActualWord.length();

                if (length <= 16) {
                    words[length][NumbofWord[length]] = ActualWord;
                    NumbofWord[length]++;
                }
                ActualWord = "";
            }
        }
    }

    if (ActualWord != "") {
        int length = ActualWord.length();

        if (length <= 16) {
            words[length][NumbofWord[length]] = ActualWord;
            NumbofWord[length]++;
        }
    }

    file2.close();

    ofstream file3("text_2.txt");
    for (int i = 1; i <= 16; i++) {

        if (NumbofWord[i] > 0) {
            file3 << "Words length " << i
                << " (" << NumbofWord[i] << "): ";

            for (int j = 0; j < NumbofWord[i]; j++) {
                file3 << words[i][j] << " ";
            }

            file3 << endl;
        }
    }

    file3.close();

    ifstream file4("text_2.txt");
    string out;

    while (getline(file4, out)) {
        cout << out << endl;
    }
    file4.close();

    return 0;
}