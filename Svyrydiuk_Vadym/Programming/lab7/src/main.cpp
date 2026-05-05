#include <iostream>
#include <string>

using namespace std;

int main() {
	string text;
	getline(cin, text);

	string words[100];
	int count = 0;
	string temp = "";

	for (int i = 0; i < text.size(); i++) {
		if (text[i] == ',' || text[i] == '.') {
			if (!temp.empty()) {
				words[count++] = temp;
				temp = "";
			}
		}
		else {
			if (text[i] != ' ') {
				temp += text[i];
			}
		}
	}

	if (!temp.empty()) {
		words[count++] = temp;
	}

	string t;

	for (int i = 0; i < count - 1; i++) {
		for (int j = 0; j < count - i - 1; j++) {
			if (words[j] > words[j + 1]) {
				t = words[j];
				words[j] = words[j + 1];
				words[j + 1] = t;
			}
		}
	}

	for (int i = 0; i < count; i++) {
		cout << words[i];
		if (i != count - 1) cout << ", ";
	}
	cout << ".";

	return 0;
}