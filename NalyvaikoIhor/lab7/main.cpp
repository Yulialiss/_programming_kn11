#include <iostream>
using namespace std;

int main() {
	string s;
	getline(cin, s);

	string words[100];
	int count = 0;

	string temp="";
	for (int i=0; i< s.length(); i++) {
		if (s[i] ==',' || s[i] == '.'){
			if (temp[0] == ' '){
				temp.erase(0,1);
			}
			words[count] = temp;
			count++;
			temp = "";

		} else {
			temp += s[i];
		}
	}
	for (int i= count -1; i>=0; i--){
		cout << words[i];
		if (i !=0) cout << ", ";
	}

	cout << "." << endl;
}