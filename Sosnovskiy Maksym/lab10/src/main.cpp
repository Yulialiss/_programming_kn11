#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Laboratory Work #10
    // Student: Sosnovskiy Maksym
    // Group: KN-11
    // Variant: 13

    cout << "Laboratory Work #10: File Input/Output" << endl;
    cout << "Variant 13: Working with text files" << endl;
    cout << "---------------------------------------" << endl;

    string filename = "output.txt";
    
    // Writing to a file
    ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << "Student: Sosnovskiy Maksym" << endl;
        outFile << "Group: KN-11" << endl;
        outFile << "Variant: 13" << endl;
        outFile.close();
        cout << "Data successfully written to " << filename << endl;
    } else {
        cout << "Error opening file for writing!" << endl;
    }

    // Reading from the file
    cout << "Reading data from file..." << endl;
    ifstream inFile(filename);
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Error opening file for reading!" << endl;
    }

    cout << "---------------------------------------" << endl;
    return 0;
}
