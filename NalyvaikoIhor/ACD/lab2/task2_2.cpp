#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    const int N = 100;
    int arr[N];
    int n, A, B;

    cout << "Enter count (n <= 50): ";
    cin >> n;
    cout << "Enter range (A B): ";
    cin >> A >> B;

    srand(time(0));
    cout << "Before: ";
    for (int i = 0; i < n; i++) {
        arr[i] = A + rand() % (B - A + 1);
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (n >= N) {
                cout << "\nLimit N=100 reached!" << endl;
                break;
            }
            // Зсув вправо
            for (int j = n; j > i + 1; j--) {
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = arr[i] * arr[i];
            n++;
            i++; // пропустити вставлений квадрат
        }
    }

    cout << "After:  ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}