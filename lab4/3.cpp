// Write a program to accept a number from the user. Find and print the sum of digits of the number. 

#include <iostream>
using namespace std;
int main(){
    int n,dig,sum=0;
    cout<<"Enter a number ";
    cin>>n;
    while (n>0)
    {
        dig = n%10;
        sum+=dig;
        n/=10;
    }
    cout<<sum;
return 0;
}