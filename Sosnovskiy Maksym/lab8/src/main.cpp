#include <iostream>
#include <string>

using namespace std;

// Defining a structure
struct Student {
    string name;
    int groupNumber;
    double averageScore;
};

int main() {
    // Laboratory Work #8
    // Student: Sosnovskiy Maksym
    // Group: KN-11
    // Variant: 13

    cout << "Laboratory Work #8: Structures in C++" << endl;
    cout << "Variant 13: Student record system" << endl;
    cout << "--------------------------------------" << endl;

    Student s1;

    // Assigning values to structure members
    s1.name = "Sosnovskiy Maksym";
    s1.groupNumber = 11;
    s1.averageScore = 95.5;

    // Displaying the data
    cout << "Student Information:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Group: KN-" << s1.groupNumber << endl;
    cout << "Average Score: " << s1.averageScore << endl;
    cout << "--------------------------------------" << endl;

    return 0;
}
