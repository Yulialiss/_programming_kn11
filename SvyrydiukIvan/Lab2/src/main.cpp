#include <iostream>
#include <cmath>

using namespace std;
int main() {
	float x1;
	float y1;
	float x2;
	float y2;
	cout << "Enter the coordinates of the point A (x1 y1):";
	cin >> x1 >> y1;
	cout << "Enter the coordinates of the point B (x2 y2):";
	cin >> x2 >> y2;

	float d1 = sqrt(x1 * x1 + y1 * y1);
	float d2 = sqrt(x2 * x2 + y2 * y2);

	if (d1 < d2) {
		cout << "Point A is closer to the origin!";
	}
	else if (d1 > d2) {
		cout << "Point B is closer to the origin!";
	}
	else {
		cout << "Distances are equal";
	}
	return 0;
}