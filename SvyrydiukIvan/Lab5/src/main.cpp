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
   int max_i = 0, max_j = 0;
   double max = matrix[0][0];

  for (int i = 0; i < n; i++) {
      double diagonal1 = matrix[i][i];
      double diagonal2 = matrix[i][n - i - 1];

      if (diagonal1 > max) { max = diagonal1; max_i = i; max_j = i; }
      if (diagonal2 > max) { max = diagonal2; max_i = i; max_j = n - i - 1; }
    }

    double temp = matrix[center][center];
    matrix[center][center] = matrix[max_i][max_j];
    matrix[max_i][max_j] = temp;

    cout << "New matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}