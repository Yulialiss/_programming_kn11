#include <iostream>
#include <string>

using namespace std;

struct Price {
	int grn;
	int kop;
};

struct Ware {
	string name;
	Price price;
};


int main() {
	int n;
	do {
		cout << "Enter quantity of wares: \n";
		cin >> n;
	} while (n <= 0 || n > 100);

	Ware list[100];

	for (int i = 0; i < n; i++) {
		cout << "Enter name of ware " << i + 1 << ":\n";
		cin >> list[i].name;
		cout << "Enter price of ware " << list[i].name << " (grn & kop):\n";
		cin >> list[i].price.grn >> list[i].price.kop;
	}

	for (int i = 0; i < n; i++) {
		cout << "Ware " << i + 1 << ": " << list[i].name << ", price: " << list[i].price.grn << " grn, " << list[i].price.kop << " kop\n";
	}

	int max_index = 0;
	int second_max = 0;
	int count_same = 1;

	for (int i = 1; i < n; i++) {

		if (list[i].price.grn > list[max_index].price.grn) {

			max_index = i;
			count_same = 1;
		}
		else if (list[i].price.grn == list[max_index].price.grn) {

			if (list[i].price.kop > list[max_index].price.kop) {

				max_index = i;
				count_same = 1;
			}
			else if (list[i].price.kop == list[max_index].price.kop) {

				second_max = i;
				count_same++;
			}
		}
	}

	if (count_same == 1) {

		cout << "The most expensive ware in the list is: " << list[max_index].name << ", price: " << list[max_index].price.grn
			<< " grn, " << list[max_index].price.kop << " kop\n\n";

	}
	else if (count_same == 2) {

		cout << "The most expensive wares in the list are:" << list[second_max].name << " and  " << list[max_index].name
			<< ", price: " << list[max_index].price.grn << " grn, " << list[max_index].price.kop << " kop\n\n";

	}
	else {
		cout << "There is no most expensive product.\n\n";
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {

			if (list[j].name > list[j + 1].name) {
				swap(list[j], list[j + 1]);
			}
		}
	}

	cout << "Wares sorted by name:\n\n";
	for (int i = 0; i < n; i++) {
		cout << list[i].name << ", price: " << list[i].price.grn << " grn, " << list[i].price.kop << " kop\n";
	}

	return 0;
}