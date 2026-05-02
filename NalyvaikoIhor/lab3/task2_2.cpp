#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout << "--- Zavdannya 2: Suma ryadiv ---" << endl;
    cout << "Vvedit naturalne chislo n: "; cin >> n;

    double S = 0; // double, щоб уникнути переповнення при великих n
    
    // Зовнішній цикл - сумуємо доданки
    for (int i = 1; i <= n; i++) {
        double term_product = 1.0;
        
        // Внутрішній цикл - множимо числа від i до 2i
        for (int j = i; j <= 2 * i; j++) {
            term_product *= j;
        }
        
        S += term_product;
    }

    // Виводимо без зайвих нулів після коми
    cout << "Rezultat S = " << fixed << setprecision(0) << S << endl;

    return 0;
}