#include <iostream>

using namespace std;

void modifyValues(int x, int y) {
    cout << "Original value of x: " << x << endl;
    cout << "Original value of y: " << y << endl;

    y = 20;
    cout << "Value of y after modification: " << y << endl;
    cout << "Value of x remains unchanged: " << x << endl;
}

int main() {
    int a = 10;
    int b = a;

    cout << "Before calling modifyValues:" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    modifyValues(a, b);

    cout << "After calling modifyValues:" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    return 0;
}
