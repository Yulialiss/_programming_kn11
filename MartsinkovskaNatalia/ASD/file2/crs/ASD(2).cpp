#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int safeInput();
void fillArray(int const N, int arr[], int& n);
void outArray(int arr[], int n);
void arithmeticMeanOfEvenElements(int arr[], int n);
void addModules(int arr[], int& n, int N);

int main(){

	srand((unsigned)time(0)); // conversion from time_t to int 
	int const N = 100;
	int k;
	int n = 0;
	int arr[N];

	do {
		cout << "[1] Fill the array \n";
		cout << "[2] Display array on the screen \n";
		cout << "[3] Arithmetic mean of even elements \n";
		cout << "[4] Add module in array \n";
		cout << "[5] Exit \n" ;

		cin >> k;

		if(cin.fail()) {
			cin.clear(); 
			cin.ignore(10000, '\n'); 
			cout << "Invalid input. Please enter a number between 1 and 5.\n";
			continue; 
		}

		switch (k)
		{
		case 1: fillArray(N, arr, n); break;

		case 2: outArray(arr, n); break;

		case 3: arithmeticMeanOfEvenElements(arr, n); break;

		case 4: addModules(arr, n, N); break;

		case 5: cout << "Exit \n"; break;
		
		}
	} while (k != 5); 

	return 0;
}


void fillArray(int const N, int arr[], int& n) {

	int A, B;

	do {
		cout << "Enter minimum and maximum limits of range: \n";
		A = safeInput() ;
		B = safeInput() ;
	} while (A > B);

	do {
		cout << "Enter quantity of arrays elements (must be less or equal 100): \n";
		n = safeInput();
	} while (n > N || n <= 0);

	for (int i = 0; i < n; i++) {

		arr[i] = A + rand() % (B - A + 1); 
	}
	cout << "Array is filled. \n";
}


void outArray(int arr[], int n) {

	if (n <= 0) {
		cout << "Array is empty.\n";
	}
	else {

		for (int i = 0; i < n; i++) {
			cout << arr[i] << "\t";
		}
		cout << "\n";
	}
}

void arithmeticMeanOfEvenElements(int arr[], int n) {

	int sum = 0;
	int count = 0;
	int result = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			sum += arr[i];
			count++;
		}	
	}
	
		if (count == 0) {
			cout << "No even numbers in the array.\n";
		} else {
			result = sum / count;
		}
	cout << "Arithmetic mean of all even elements of an array: " << result << "\n";
}


void addModules(int arr[], int& n, int N) {

	cout << "Original array: \n";
	outArray(arr, n);

	int newSize = n;

	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			newSize++;
		}
	}

		if (newSize > N) {
			cout << "Qantity elements of array exceeds limit \n";
			return;

		} else { 

			int i = n - 1;
			int j = newSize - 1;

			while (i >= 0) {

				if (arr[i] < 0) {
					arr[j--] = abs(arr[i]);
					arr[j--] = arr[i];
				}
				else {
					arr[j--] = arr[i];
				}

				i--;
			}

			n = newSize;
			
			cout<< "Array after adding modules: \n";
			outArray(arr, n);
		}
}


int safeInput() {
	int value;

	while (true) {
		cin >> value;

		if (cin.fail()) {
			cin.clear(); 
			cin.ignore(10000, '\n'); 
			cout << "Invalid input. Please enter a valid integer: ";
		} else {
			return value; 
		}
	}
}