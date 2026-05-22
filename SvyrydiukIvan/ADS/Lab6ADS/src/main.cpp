#include <iostream>

using namespace std;

// Рекурсивна функція, що перевіряє степінь 3 //
bool PowerOfThree(int n) {
    if (n == 1)
        return true;

    if (n % 3 != 0 || n == 0) // степінь трійки - це число, яке ділиться націло на три та один
        return false;

    return PowerOfThree(n/3);  // викликаємо функцію
}

int main() {
    int N;

    cout << "Enter number N: ";
    cin >> N;

    if (PowerOfThree(N))
        cout << "The number is a power of 3" << endl;
    else
        cout << "The number is NOT a power of 3" << endl;

    return 0;
}