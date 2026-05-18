#include <iostream>

using namespace std;

//створення функції НСД на основі алгоритму Евкліда з остачею
int NSD(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}

	return a; //функція повертає НСД чисел
}

//створення функції перевірки числа на простоту через НСД
bool isPrime(int x) {
	if (x <= 1) {
		return false;//числа менші чи рівні одиниці не прості
	}
	for (int i = 2; i < x; i++) {
		if (NSD(x, i) > 1) {
			return false;//якщо є спільний дільник більше одиниці числа не прості
		}
	}
	return true;//число просте
}

//головна функція програми
int main() {
	int x, N;

	//основне завдання
	cin >> x;//введення числа

	//перевірка числа на простоту
	if (isPrime(x)) {
		cout << "Prime\n";
	}
	else {
		cout << "Not prime\n";
	}

	//додаткове завдання
	cin >> N;//введення межі

	//перевірка ряду чисел на простоту
	for (int i = 2; i <= N; i++) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}

	return 0;
}