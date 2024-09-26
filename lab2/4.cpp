//Write a program to rotate their values such that x has value of y, y has value of z and z has value of x.#include <iostream>
#include <iostream>
using namespace std;
int main() {
    int x, y, z;

    cout << "Enter the values of x, y, and z: ";
    cin >> x >> y >> z;
    int temp = x;
    x = y;
    y = z;
    z = temp;
    cout << "Rotated values: x = " << x << ", y = " << y << ", z = " << z << endl;

    return 0;
}