#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// GCD of two numbers using Euclidean algorithm (modulo version)[cite: 7]
int getGCD(int a, int b) {
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}

// Function to find GCD of an array, with option to skip one element[cite: 7]
int findArrayGCD(const vector<int>& arr, int skipIdx = -1) {
    int res = -1;
    for (int i = 0; i < (int)arr.size(); i++) {
        if (i == skipIdx) continue;
        if (res == -1) res = arr[i];
        else res = getGCD(res, arr[i]);
    }
    return res;
}

int main() {
    int n;
    cout << "Enter the number of elements N: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // MAIN TASK: GCD of all elements[cite: 7]
    int fullGCD = findArrayGCD(arr);
    cout << "\n1. GCD of all elements: " << fullGCD << endl;

    // ADDITIONAL TASK: Check if removing one element increases the GCD[cite: 7]
    bool found = false;
    cout << "2. Checking if removing an element increases GCD..." << endl;

    for (int i = 0; i < n; i++) {
        int newGCD = findArrayGCD(arr, i);
        if (newGCD > fullGCD) {
            cout << "Yes! Removing [" << arr[i] << "] increases GCD to: " << newGCD << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No, removing any single element won't increase the GCD." << endl;
    }

    return 0;
}