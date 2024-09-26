
#include<iostream>
using namespace std;

int main()
{
    int a,b,c,largest,second_largest;
    cout<<"\n Enter first number: ";
    cin>>a;
    cout<<"\n Enter second number: ";
    cin>>b;
    cout<<"\n Enter third number: ";
    cin>>c;
   if ((a> b && a<c) || (a<b && a>c))
   {
       cout<<"\n"<<a<<" is second largest";
   }
   else if ((b>a && b<c) || (b<a && b>c))
   {
       cout<<"\n"<<b<<" is second largest";
   }
   else
   {
       cout<<"\n"<<c<<" is the second largest";
   }
}