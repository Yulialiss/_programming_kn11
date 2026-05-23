#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Laboratory Work #1 (ASD)
    // Student: Sosnovskiy Maksym
    // Group: KN-11 | Variant: 13
    
    string input;
    cout << "Enter a string (end with a dot): ";
    getline(cin, input);

    string result = "";
    string word = "";

    for (int i = 0; i < input.length(); i++) {
        // Якщо символ - буква, додаємо до поточного слова
        if (isalpha(input[i])) {
            word += input[i];
        } 
        // Якщо розділовий знак або пробіл — беремо останню літеру слова
        else if (!word.empty()) {
            result += word.back();
            word = "";
        }
    }

    cout << "---------------------------------------" << endl;
    cout << "Resulting string: " << result << endl;

    return 0;
}
