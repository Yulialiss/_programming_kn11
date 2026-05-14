#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ofstream f1_output("text_1.txt");

    if (!f1_output) {
        cout << "Error: text_1.txt not opened" << endl;

        return 0;
    }

    int n;
    string s;

    cout << "Number of lines: ";
    cin >> n;

    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "Line " << i + 1 << ": ";
        getline(cin, s);

        f1_output << s << endl;
    }

    f1_output.close();

    ifstream f1_input("text_1.txt");
    ofstream fail_output("text_2.txt");

    if (!f1_input || !fail_output) {
        cout << "Error: files not opened" << endl;

        return 0;
    }

    string num = "";

    while (getline(f1_input, s))
    {
        for (char c : s)
        {
            if (isdigit(c))
                num += c;
            else
            {
                if (num != "")
                {
                    fail_output << num << endl;
                    num = "";
                }
            }
        }

        if (num != "")
        {
            fail_output << num << endl;
            num = "";
        }
    }

    f1_input.close();
    fail_output.close();

    ifstream fail_input("text_2.txt");

    if (!fail_input) {
        cout << "Error: text_2.txt not opened" << endl;

        return 0;
    }

    cout << endl << "Result:" << endl;

    while (getline(fail_input, s))
        cout << s << endl;

    fail_input.close();

    return 0;
}