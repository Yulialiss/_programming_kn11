#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "hello car boy girl c++.";
    string word = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ' && s[i] != '.') {
            word += s[i];
        }
        else {
            for (int j = 0; j < word.length() - 1; j++) {
                cout << word[j];
            }
            cout << " ";
            word = "";
        }
    }

    cout << "." << endl;
    return 0;
}