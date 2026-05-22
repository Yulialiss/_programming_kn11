#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cout << "Enter word: ";
    cin >> s;

    if (s.length() < 7) {
        cout << "Word is too short";
    }
    else {
        char *p = &s[s.length() - 7];

        if (*p == 's' || *p == 'w')
            cout << "Yes";
        else
            cout << "No";
    }

    return 0;
}