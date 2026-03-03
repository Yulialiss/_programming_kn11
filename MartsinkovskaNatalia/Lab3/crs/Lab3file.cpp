#include <iostream>
#include <cmath>

int main() {
	double f = 1;
	for (double i = 0.1; i <= 10; i += 0.1) {
		f = f * (1 + sin(i)); 
	}
	std:: cout << "f: " << f << std::endl; 
}