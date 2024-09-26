// var arithmetic ops 
#include <iostream>
using namespace std;
int main(){
    int n,n1,n2,tot;
    cout<<"Enter ur choice ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"Enter the two numbers ";
        cin>>n1>>n2;
        tot = n1+n2;
        cout<<"The total is "<<tot;
        break;
    case 2:

        cout<<"Enter the two numbers ";
        cin>>n1>>n2;
        tot = n1-n2;
        cout<<"The total is "<<tot;
        break;
    case 3:

        cout<<"Enter the two numbers ";
        cin>>n1>>n2;
        tot = n1*n2;
        cout<<"The total is "<<tot;
        break;
    case 4:
    
            cout<<"Enter the two numbers ";
            cin>>n1>>n2;
            tot = n1/n2;
            cout<<"The total is "<<tot;
            break;

    
    default:
        cout<<"Invalid choice";
        break;
    }
    return 0;
}