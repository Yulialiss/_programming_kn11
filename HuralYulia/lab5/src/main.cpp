#include <iostream>
using namespace std;

int main() {

    int a[3][3] = {
        {1, 5, 3},
        {4, 2, 6},
        {7, 8, 9}
    };

    cout << "Original matrix:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        int k = 0;

        for (int j = 1; j < 3; j++) {
            if (a[i][j] > a[i][k]) {
                k = j;
            }
        }

        int t = a[i][i];
        a[i][i] = a[i][k];
        a[i][k] = t;
    }

    cout << "\nMatrix after swapping:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}