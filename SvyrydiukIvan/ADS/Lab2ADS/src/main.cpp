#include <iostream>
#include <ctime>

using namespace std;

const int N = 100;
int FilledArray(int a[]) {
    int n, A, B;

    cout << "Enter n: ";
    cin >> n;
    if (n < 0 || n > N) {
        cout << "Error!" << endl;
        return 0;
    }

    cout << "Enter A and B: ";
    cin >> A >> B;

    if (A > B) swap(A, B);

    srand(time(0));

    for (int i = 0; i < n; i++)
        a[i] = A + rand() % (B - A + 1);

    return n;
}

void PrintArray(int a[], int n) {
    if (n == 0) {
        cout << "Array is empty." << endl;
        return;
    }

    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

void Task1(int a[], int n) {
    if (n == 0) {
        cout << "Array is empty." << endl;
        return;
    }

    int count = 0, sum = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0 && a[i] % 2 != 0) {
            count++;
            sum += a[i];
        }
    }
    cout << "Number of numbers: " << count << endl;
    cout << "Sum of numbers: " << sum << endl;
}

int Task2(int a[], int n) {
    if (n == 0) {
        cout << "Array is empty." << endl;
        return 0;
    }
    cout << "Initial array: ";
    PrintArray(a, n);

    int newSize = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) a[newSize++] = a[i];
    }

    n = newSize;
    if (n == 0) {
        cout << "Array is empty.";
        return 0;
    }
    cout << "New array: ";
    PrintArray(a, n);

    return n;
}

int main() {
    int a[N], n = 0, k;

    do {
        cout << endl << "      Menu      " << endl;
        cout << "1. Create array" << endl;
        cout << "2. Output array" << endl;
        cout << "3. Task 1" << endl;
        cout << "4. Task 2" << endl;
        cout << "5. Exit" << endl;
        cout << "Choice: ";
        cin >> k;

        switch (k) {
        case 1: n = FilledArray(a);
            break;
        case 2: PrintArray(a, n);
            break;
        case 3: Task1(a, n);
            break;
        case 4: n = Task2(a, n);
            break;
        }
    } 
    while (k != 5);

    return 0;
}