#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter the size of the odd square matrix: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Condition not met. Matrix size must be odd!" << endl;
        return 0;
    }

    double matrix[50][50];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

   int center = n / 2;
   double max = matrix[0][0];

   for (int i = 0; i < n; i++) {
       if (matrix[i][i] > max)
           max = matrix[i][i];

       if (matrix[i][n - i - 1] > max)
           max = matrix[i][n - i - 1];
   }

   for (int i = 0; i < n; i++) {
       if (matrix[i][i] == max) {
           double temp = matrix[center][center];
           matrix[center][center] = matrix[i][i];
           matrix[i][i] = temp;
       }

       if (matrix[i][n - i - 1] == max) {
           double temp = matrix[center][center];
           matrix[center][center] = matrix[i][n - i - 1];
           matrix[i][n - i - 1] = temp;
       }

   }

    cout << "New matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}