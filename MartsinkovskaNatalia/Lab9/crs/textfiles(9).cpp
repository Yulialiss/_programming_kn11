#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ofstream file1("text_1.txt");

    if (!file1) {
        cout << "Error opening file text_1.txt" << endl;
     
    }

    string text = "1010110010110110011110000111100001111000010101";

    file1 << text;
    file1.close();

    cout << "Text of file text_1.txt:" << endl;
    cout << text << endl << endl;

    ifstream read1("text_1.txt");

   
    if (!read1) {
        cout << "Error reading file text_1.txt" << endl;
        return 1;
    }

    ofstream file2("text_2.txt");

    if (!file2) {
        cout << "Error creating file text_2.txt" << endl;
        return 1;
    }

    char ch;
    int count = 0;

    while (read1.get(ch)) {

        if (ch == '1')
            ch = '0';
        else if (ch == '0')
            ch = '1';

        file2 << ch;
        count++;

        if (count % 15 == 0)
            file2 << endl;
    }

    read1.close();
    file2.close();

    ifstream read2("text_2.txt");

    if (!read2) {
        cout << " Error reading text_2.txt" << endl;
        return 1;
    }

    string line;

    cout << "Text of file text_2.txt:" << endl;

    while (getline(read2, line)) {
        cout << line << endl;
    }

    read2.close();

    return 0;
}