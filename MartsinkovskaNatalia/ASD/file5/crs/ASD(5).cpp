#include <iostream>
using namespace std;

void shellSort(int arr[], int n) {

    for (int h = n / 2; h > 0; h /= 2) {
        for (int i = h; i < n; i++) {

            int temp = arr[i];
            int j;

            for (j = i; j >= h && arr[j - h] < temp; j -= h) {
                arr[j] = arr[j - h];
            }
            arr[j] = temp;
        }
    }
}

void print(int arr[], int n) {

    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int n;

	do { 
        cout << "Enter the number of elements: ";
	cin >> n;
    } while (n <= 0 || n > 1000);

	int arr[1000];

	for (int i = 0; i < n; i++) {
		arr[i] = 1000 - rand() % 2000;
	}
    cout << "Original array:\n";
    print(arr, n);

    shellSort(arr, n);

    cout << "Array after sorting in descending order:\n";
    print(arr, n);

    return 0;
}