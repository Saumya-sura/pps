#include<iostream>
using namespace std;
int main()
{
    int n, s1, s2, cs1 = 0, cs2 = 0, max = 0, cl = 0, winner = 0, cw = 0;
    cout<<"Enter the number of rounds "<<endl;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
       cout<<"Enter the scores of both players  for  round "<<i+1<<endl;
        cin>>s1>>s2;
        cs1 = cs1 + s1;
        cs2 = cs2 + s2;
        if (cs1>cs2)
        {
            cl = cs1 - cs2;
            cw = 1;
        }
        else
        {
            cl = cs2 - cs1;
            cw = 2;
        }
        if (cl>max)
        {
            max = cl;
            winner =cw;
        }       
    }
        cout<<"The winner is "<<winner<<" with a lead of "<<max;
        return 0;
}