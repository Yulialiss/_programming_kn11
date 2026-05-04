#include <iostream>
#include <string>

using namespace std;

string MakeResult (string input) {
	string word = " ";
	string result = " ";

	for (int i = 0; i < input.length(); i++) {
		if (input[i] == ',' || input[i] == '.') {
			if (word != " ") {
				result += word[word.length() - 1];
				word = " ";
			}
		}
		else if (input[i] != ' ') {
			word += input[i];
		}
	}

	return result;
}

int main() {
	string input;

	cout << "Enter a set of words: ";
	getline(cin, input);

	cout << "Result: " << MakeResult(input);

	return 0;
}