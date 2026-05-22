#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char* n = new char[1000] ;

    cout << "Enter a string: ";
    cin.getline(n, 1000);

    int punctCount = 0;
    char* p = n;

    while (*p != '\0') {
        if (*p == '.' || *p == ',' || *p == '!' ||
            *p == '?' || *p == ':' || *p == ';') {
            punctCount++;
        }
        p++;
    }
    cout << "Number of punctuation marks: " << punctCount << endl;

 //  char* words[100];
 //   int count = 0;
 //
 //   char* token = strtok(n, " ");
 //
 //   while (token != NULL && count < 100) {
 //       words[count++] = token;
 //       token = strtok(NULL, " ");
 //   }
 //
 //   cout << "\nWords in the sentence:\n";
 //
 //   for (int i = 0; i < count; i++) {
 //       cout << words[i] << endl;
 //   }
    
    delete[] n;

    return 0;
}