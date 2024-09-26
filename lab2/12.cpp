// C++ Program to Calculate Compound Interest
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float p, r, t, CI, amount;
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "Enter the rate of interest: ";
    cin >> r;
    cout << "Enter the time period in years: ";
    cin >> t;
    amount = p * (pow((1 + r/100), t));
    CI = amount - p;
    cout << "Compound interest is = " << CI << endl;
    return 0;
}//