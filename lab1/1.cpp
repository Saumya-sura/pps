// "Simple intrest "
#include<iostream>
using namespace std;
int main()
{
    int p,n,r,SI;
    cout<<"Enter principle ";
    cin>>p;
    cout<<"Enter rate";
    cin>>r;
    cout<<"Enter time ";
    cin>>n;
    SI = (p*n*r)/100;
    cout<<"ur simple intrest is :"<<SI;
    return 0;
}