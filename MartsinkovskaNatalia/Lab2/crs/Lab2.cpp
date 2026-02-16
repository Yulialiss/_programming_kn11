#include <iostream>
#include <cmath>
#include <algorithm>

   
using namespace std;

int main() { 

	double x;
	cout << "x = "<<endl;
	cin >> x;
 
	double s = sin(x);
	double c = cos(x);
    double l; 
    bool isLog = false;

    if(x>0) {
        l = log(x);
        isLog = true;
    } else {
		cout << " when x <= 0, the logarithm is invalid" << endl;
	}
	 
	cout << "Numbers in ascending order: " << endl;

	if (isLog) {
		if (s > c) swap(s, c);
		if (s > l) swap(s, l);
		if (c > l) swap(c, l);

		cout << s << " " << c << " " << l << endl;
	}
	else {
		if (s > c) swap(s, c);
		cout << s << " " << c << " " << endl;
	}


	double result;
    if (x <= 2) {
        result = x * x + 4*x + 5;
    } else {
        result = 1 / (x * x + 4*x + 5);
    }
	cout << "F(x) = " << result;
	
	return 0;
}
         