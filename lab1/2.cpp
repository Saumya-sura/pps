//Area and perimeter of a rect

#include<iostream>
using namespace std;

int main()
{

    int l,b,area,p;
    cout<<"Enter the length ";
    cin>>l;
    cout<<"Enter breadth ";
    cin>>b;
    area = l*b;
    p =2*(l+b);
    cout<<"The perimeter is :"<<p;
    cout<<"The area is :"<<area;
    return 0;
}