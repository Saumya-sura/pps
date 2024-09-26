//Write a program to find the sum of all numbers between M and N, where N>M, using for loop.
#include <iostream>
using namespace std;
int main(){
        int m,n,sum=0;
        cout<<"Enter value for M"<<endl;
        cin>>m;
        cout<<"Enter value for N"<<endl;
        cin>>n;
        for (int i = m; i <=n; i++)
        {
            sum+=i;
        }
        cout<<"The sum of all numbers between "<<m<<" and "<<n<<" is "<<sum;
        
    return 0;
}