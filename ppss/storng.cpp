#include <iostream>
//storng number is sum of its facotrialss. ex 145
using namespace std;
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}
int main() {
    int num, originalNum, sum = 0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if (sum == originalNum) {
        cout << originalNum << " is a strong number." << endl;
    } else {
        cout << originalNum << " is not a strong number." << endl;
    }

    return 0;
}

/* 

#include <iostream>

using namespace std;

int main() {
    int num, originalNum, sum = 0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    while (num > 0) {
        int digit = num % 10;
        int fact = 1;
        for (int i = 1; i <= digit; ++i) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }

    if (sum == originalNum) {
        cout << originalNum << " is a strong number." << endl;
    } else {
        cout << originalNum << " is not a strong number." << endl;
    }

    return 0;
}




*/
