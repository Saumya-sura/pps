#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int digits[n];
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }

   int  number = 0;
    for (int i = 0; i < n; i++) {
        number = number * 10 + digits[i];
    }
    cout << "The number is: " << number << endl;

    return 0;
}
