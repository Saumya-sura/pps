#include<iostream>
using namespace std;
int main(){
    int ln,un;
    int flag;
    cout<<"Enter the lower number: ";
    cin>>ln;
    cout<<"Enter the upper number: ";
    cin>>un;
    cout <<"Prime number are : ";
    for (int i = ln; i <=un; i++)
    {
        flag =1;
        for (int j = 2; j <= i/2; j++)
        {
            if (i%j==0)
            {
                flag = 0;
                break;
            }
        }
    
    if (flag ==1)
    {
        cout<<i<<endl;
    }}
    

    return 0;
}