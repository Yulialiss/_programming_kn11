#include <iostream>
using namespace std;

int area(int a, int b) { 

    if (a == 0 || b == 0) {
        return 0;
    }

    return a + area(a, b - 1);
}

int main() {
	int a, b;

	cout << "Enter the length and width of the rectangle: ";
    do {
        cin >> a >> b;
    } while (a < 0 || b < 0);
	cout << "The area of the rectangle is: " << area(a, b) << endl;

    return 0;
}
