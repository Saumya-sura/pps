// Menu driven for area of sq rect traingle 

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter ur choice ";
    cin>>n;
    switch (n)
    {
        case 1:
        {
            int a;
            cout<<"Enter the side of square ";
            cin>>a;
            cout<<"Area of square is "<<a*a;
            break;
        }
        case 2:
        {
            int l,b;
            cout<<"Enter the length and breadth of rectangle ";
            cin>>l>>b;
            cout<<"Area of rectangle is "<<l*b;
            break;
        }
        case 3:
        {
            int b,h;
            cout<<"Enter the base and height of triangle ";
            cin>>b>>h;
            cout<<"Area of triangle is "<<0.5*b*h;
            break;
        }

    }
}