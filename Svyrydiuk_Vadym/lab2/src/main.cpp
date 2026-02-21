#include <iostream>

using namespace std;

int main() {

	int a;
	int b;
	int c;
	int x;

	cout << "NumberFirst: ";
	cin >> a;
	cout << "NumberSecond: ";
	cin >> b;
	cout << "NumberThird: ";
	cin >> c;

	if (a < b) {
		x = a;
		a = b;
		b = x;
	}

	if (b < c) {
		x = b;
		b = c;
		c = x;
	}

	if (a < b) {
		x = a;
		a = b;
		b = x;
	}

	cout << "NumberMax:" << a << endl;
	cout << "NumberAver:" << b << endl;
	cout << "NumberMin:" << c << endl;

	return 0;

}