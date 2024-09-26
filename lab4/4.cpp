#include<iostream>
using namespace std;
int main()
{
    int n,nt=0,n1=0,n2=1;
        cout<<"Enter a number ";
        cin>>n;
        cout<<"Fibonacci series: ";
        for(int i =1;i<=n;i++){
            cout<<n1<< "  ";
            nt = n1+n2;
            n1 =n2;
            n2 =nt;
        }

    return 0;
}