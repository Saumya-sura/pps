#include<iostream>
using namespace std;
int main()
{
    int x,y,total;
    cout<<"Enter the value u recived on dice ";
    cin>>x;
    cout<<"Enter the value u recived on dice ";
    cin>>y;
    total = x+y;
    if(total>6)
    {
        cout<<"The turn was good ";
    }
    else
    {
        cout<<"The turn was bad as the sum was  "<<total;
    }
}