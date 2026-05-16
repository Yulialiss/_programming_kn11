#include <iostream>
#include <string>

using namespace std;

int main() {
	string words = "mood,dog,meat,noon,ticket.";
	cout<<words<<endl; 

	string word = "";
	int count = 0;

	for (int i = 0; i < words.length(); i++) {

		if (words[i] != ',' && words[i] != '.') {
			word += words[i];
		}
		else {

			for (int k = 0; k < word.length(); k++) {
				for(int p = k + 1; p < word.length(); p++) {

					if(word[k] == word[p]) {
						count++;
					}

				}
			}
			
			if (count >= 2) {
				cout << word << endl;
			}
			word = "";
			count = 0;
		}	
	}

	return 0;
}