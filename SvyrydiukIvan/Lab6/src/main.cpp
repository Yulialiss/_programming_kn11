#include <iostream>
#include <cmath>
using namespace std;

double median(double x, double y, double q) {
	return 0.5 * sqrt(2 * y * y + 2 * q * q - x * x);
}

double findMax(double med1, double med2, double med3) {
	double Max = med1;
	if (med2 > Max)
		Max = med2;
	if (med3 > Max)
		Max = med3;

	return Max;
}

int main() {
	double a, b, c;
	cout << "Enter the sides of the triangle:";
	cin >> a >> b >> c;

	double med_a = median(a, b, c);
	double med_b = median(b, a, c);
	double med_c = median(c, a, b);
	cout << "Median to side a: " << med_a << endl;
	cout << "Median to side b: " << med_b << endl;
	cout << "Median to side c: " << med_c << endl;

	double MaxMedian = findMax(med_a, med_b, med_c);
	cout << "The largest median: " << MaxMedian << endl;

	return 0;
}