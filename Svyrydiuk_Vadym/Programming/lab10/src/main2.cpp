#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;

	cout << "Enter word: ";
	cin >> s;

	char *p[100];

	for (int i = 0; i < s.length(); i++) {
		p[i] = &s[i];
	}

	char t = 0;

	for (int i = 1; i < s.length() - 2; i += 2) {
		for (int j = 1; j < s.length() - 2; j += 2) {
			if (*p[j] > *p[j + 2]) {
				t = *p[j];
				*p[j] = *p[j + 2];
				*p[j + 2] = t;
			}
		}
	}

	cout << "Sorted letters: ";

	for (int i = 1; i < s.length(); i += 2) {
		cout << *p[i];
	}

	return 0;
}