#include <iostream>
#include <ctime>
using namespace std;

const int maxSize = 100;

struct Queue {
	int arr[maxSize];
	int head = 0;
	int tail = -1;

	void Enqueue(int x) {
		tail++;
		arr[tail] = x;
	}

	bool empty() {
		return head > tail;
	}

	int Dequeue() {
		int x = arr[head];
		head++;
		return x;
	}
};

void printNumbers(int arr[], int size) {

	Queue even;
	Queue odd;

	for (int i = 0; i < size; i++) {

		if (arr[i] == 0) {
			continue;
		} else if (arr[i] % 2 == 0) {
			even.Enqueue(arr[i]);
		} else {
			odd.Enqueue(arr[i]);
		}
	}

	cout << "\n Array after review :\n";
	while (!even.empty()) {
		cout << even.Dequeue() << " ";
	}
	while (!odd.empty()) {
		cout << odd.Dequeue() << " ";
	}
}

int main() {

	srand(time(0));

	int size, maxVal, minVal;

		do {
			cout << "Enter the size of the array:\n";
			cin >> size;
		} while (size <= 0 || size > maxSize);
		do {
			cout << "Enter the maximum value of the elements: \n";
			cin >> maxVal;
		} while (maxVal <= 0);
		do {
			cout << "Enter the minimum value of the elements: \n";
			cin >> minVal;
		} while (minVal < 0 || minVal > maxVal);

	int arr[maxSize];

	cout << "\n  Generated array:\n";

	for (int i = 0; i < size; i++) {

		arr[i] = rand() % (maxVal - minVal + 1) + minVal;
		cout << arr[i] << " ";
	}
	cout << "\n";

	printNumbers(arr, size);

	return 0;
}