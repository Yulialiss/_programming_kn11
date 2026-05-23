#include <iostream>
using namespace std;

 int quantityOfIterations(int a, int b) {
	int count = 0;
		while (b != 0) {
			int temp = b;
			b = a % b;
			a = temp;
			count++;
		}
		return count;
}

int main() {

	const int N = 1000;

	cout << "Task 1: \n";
	cout << "Enter two numbers: \n";
	int a, b;
	cin >> a >> b;

	cout << "Number of iterations: ";
	cout << quantityOfIterations(a, b) << "\n\n";

	
	int fib[50];
	fib[0] = 1;
	fib[1] = 1;
	int size = 2;

	while (true) {
		int next = fib[size - 1] + fib[size - 2];
		if (next > N) break;
		fib[size++] = next;
	}

	int max_iter = 0;
	int A = 1, B = 1;

	for (int i = 1; i < size; i++) {
		int x = fib[i];
		int y = fib[i - 1];

		int steps = quantityOfIterations(x, y);

		if (steps > max_iter) {
			max_iter = steps;
			A = x;
			B = y;
		}
	}

	cout << "Task 2: \n";
	cout << "The biggest number of iterations is: " << max_iter << " for numbers: " << A << " and " << B << endl;

	return 0;
}

