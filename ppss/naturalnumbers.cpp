#include<iostream>
using namespace std;
int main()
{
    int N, i, sum = 0,o=0;
    cout<<"\nEnter N: ";
    cin>>N;
    for(i = 1 ; i <= N ; i++)
    {
        sum+=i*2;
        o+=i;
        
    }
    cout<<"\nThe sum of the first "<<N<<" even numbers is: "<<sum;
    cout<<"\nThe sum of the first "<<N<<" odd numbers is: "<<o;
    return 0;
}
