#include <iostream>

using namespace std;

int main() {
    int base, exponent;
    long long result = 1;

    cout << "Enter base (X): ";
    cin >> base;
    cout << "Enter exponent (Y): ";
    cin >> exponent;
    for (int i = 1; i <= exponent; ++i) {
        result *= base;
    }
    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}
