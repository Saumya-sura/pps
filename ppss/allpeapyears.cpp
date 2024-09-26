#include<iostream>
using namespace std;
int main()
{
    int N, i;
    cout<<"\nEnter N: ";
    cin>>N;
    cout<<"\nLeap years between 1 and N: ";
    for(i = 1 ; i <= N ; i++)
    {
        if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}