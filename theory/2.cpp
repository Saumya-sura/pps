#include<iostream>
using namespace std;
int main()
{
    int x,y,a;
    cout<<"Enter Min age req"<<endl;
    cin>>x;
    cout<<"Enter Max age req"<<endl;
    cin>>y;
    cout<<"Enter your age "<<endl;
    cin>>a;
    if (a>=x && a<=y)
    {
        cout<<"You are eligible for this competitve exam ";
    }
    else
    {
        cout<<"You are not eligible for this competitve exam ";
    }
   
    
}