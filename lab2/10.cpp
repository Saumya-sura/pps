// largest number using ternary op

#include<iostream>
using namespace std;
int main()
{
    int n1,n2,max;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    
    max = (n1>n2)? n1:n2;
    cout<<"Largest number is: "<<max;
}