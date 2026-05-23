#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cout << "Enter the number of elements: "<<endl;	
	cin >> n;
	int even = 0, odd = 0;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cout << "Enter element of array" << endl;
		cin >> arr[i];
		if (arr[i] % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
	}
	cout << "Quatity of even numbers: " << even << endl;
	cout << "Quatity of odd numbers: " << odd << endl;

	return 0;
}