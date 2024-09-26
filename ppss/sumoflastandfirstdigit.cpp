#include <iostream>

using namespace std;

int main() {
    int num, firstDigit, lastDigit;

    cout << "Enter an integer: ";
    cin >> num;

    lastDigit = num % 10;

    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;

    int sum = firstDigit + lastDigit;

    cout << "The sum of the first and last digits is: " << sum << endl;

    return 0;
}
