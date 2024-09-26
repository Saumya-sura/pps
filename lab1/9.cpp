// 9.	Write an algorithm and draw a flow chart to find the sum of the following series- 12 + 22 + 32 +…. N2
#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;

    cout << "Enter the value of N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    for (int i = 1; i <= N; ++i) {
        sum += i * i;
    }

    cout << "The sum of the series 1^2 + 2^2 +" << N << "^2 is: " << sum << endl;

    return 0;
}
