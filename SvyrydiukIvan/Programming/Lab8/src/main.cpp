#include <iostream>
#include <cmath>

using namespace std;

struct Triangle {
    double a, b, c;
    int id;
};

bool IsValid(Triangle k) {
    return (k.a + k.b > k.c && k.a + k.c > k.b && k.b + k.c > k.a);
}

double perimeter(Triangle k) {
    return k.a + k.b + k.c;
}

double area(Triangle k) {
    double p = perimeter(k) / 2;
    return sqrt(p * (p - k.a) * (p - k.b) * (p - k.c));
}

int main() {

    const int MAX = 40;
    Triangle tr[MAX];
    int n;

    cout << "Enter the number of triangles in the structure: ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Invalid number!" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << endl << "Triangle " << i + 1 << endl;

        cout << "Side A: ";
        cin >> tr[i].a;

        cout << "Side B: ";
        cin >> tr[i].b;

        cout << "Side C: ";
        cin >> tr[i].c;

        tr[i].id = i + 1;
    }

    int maxIndex = -1;
    double maxArea = 0;
    bool found = false;

    for (int i = 0; i < n; i++) {

        if (IsValid(tr[i])) {

            double ar = area(tr[i]);

            if (!found || ar > maxArea) {
                maxArea = ar;
                maxIndex = i;
                found = true;
            }

        }
        else {
            cout << "Triangle " << tr[i].id << " is invalid!" << endl;
        }
    }

    if (!found) {
        cout << endl << "No valid triangles found!" << endl;
        return 0;
    }

    cout << endl << endl;
    cout << "Triangle with largest area: " << endl;

    cout << "Original ID: " << tr[maxIndex].id << endl;
    cout << "Sides: "
        << tr[maxIndex].a << " "
        << tr[maxIndex].b << " "
        << tr[maxIndex].c << endl;

    cout << "Area: " << maxArea << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (perimeter(tr[j]) > perimeter(tr[j + 1])) {

                Triangle temp = tr[j];
                tr[j] = tr[j + 1];
                tr[j + 1] = temp;
            }
        }
    }

    cout << endl << "Triangles sorted by perimeter:" << endl;

    for (int i = 0; i < n; i++) {

        if (IsValid(tr[i])) {

            cout << endl << "Triangle (original ID: " << tr[i].id << "):" << endl;

            cout << "A = " << tr[i].a << endl;
            cout << "B = " << tr[i].b << endl;
            cout << "C = " << tr[i].c << endl;

            cout << "Perimeter = " << perimeter(tr[i]) << endl;

        }
        else {
            cout << endl << "Triangle " << tr[i].id << " is invalid!" << endl;
        }
    }

    return 0;
}