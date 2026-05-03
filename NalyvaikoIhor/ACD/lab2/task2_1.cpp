#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    const int N = 100;
    int arr[N];
    int n, A, B;

    cout << "Enter count (n <= 100): ";
    cin >> n;
    cout << "Enter range (A B): ";
    cin >> A >> B;

    srand(time(0));
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        arr[i] = A + rand() % (B - A + 1);
        cout << arr[i] << " ";
    }
    cout << endl;

    int minIdx = 0, maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIdx]) minIdx = i;
        if (arr[i] > arr[maxIdx]) maxIdx = i;
    }

    int start = (minIdx < maxIdx) ? minIdx : maxIdx;
    int end = (minIdx > maxIdx) ? minIdx : maxIdx;

    cout << "Between MIN and MAX: ";
    if (start + 1 >= end) {
        cout << "no elements";
    } else {
        for (int i = start + 1; i < end; i++) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}