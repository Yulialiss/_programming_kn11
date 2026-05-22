#include <iostream>
#include <ctime>

using namespace std;

int Array[100];
int n;

bool isPrime(int x) {
	if (x <= 1) {
		return false;
	}
	
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

void fillArray() {
	int A, B;

	cout << "Enter limits and number: ";
	cin >> A >> B >> n;

	srand(time(0));

	for (int i = 0; i < n; i++) {
		Array[i] = A + rand() % (B - A + 1);
	}
}

void printArray() {
	for (int i = 0; i < n; i++) {
		cout << Array[i] << " ";
	}
	cout << "\n";
}

void task1() {
	int primes[100];
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		if (isPrime(Array[i])) {
			primes[cnt++] = Array[i];
		}
	}
	
	if (cnt == 0) {
		cout << "No primes\n";
		return;
	}
	
	for (int i = 0; i < cnt; i++) {
		cout << primes[i] << " ";
	}
	cout << "\n" << "Count: " << cnt << "\n";
}

void task2() {
	int K, val;

	cin >> K >> val;

	for (int i = n; i >= K; i--) {
		Array[i] = Array[i - 1];
	}

	Array[K - 1] = val;
	n++;

	printArray();
}

int main() {
	int k;

	do {
		cout << "\n1 Fill\n2 Print\n3 Task1\n4 Task2\n5 Exit\n";
		cin >> k;

		switch (k) {
		case 1: fillArray(); break;
		case 2: printArray(); break;
		case 3: task1(); break;
		case 4: task2(); break;
		}

	} while (k != 5);
}