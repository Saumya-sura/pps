#include <iostream>

using namespace std;

int main() {
    int num, positiveCount = 0, negativeCount = 0, zeroCount = 0;
    char choice;

    do {
        cout << "Enter an integer: ";
        cin >> num;

        if (num > 0) {
            ++positiveCount;
        } else if (num < 0) {
            ++negativeCount;
        } else {
            ++zeroCount;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Positive numbers: " << positiveCount << endl;
    cout << "Negative numbers: " << negativeCount << endl;
    cout << "Zeros: " << zeroCount << endl;

    return 0;
}
