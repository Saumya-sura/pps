//rev a 4 digit number 

#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number ";
    cin>>n;
    while(n!=0){
        sum = sum*10+n%10;
        n = n/10;

    }
cout<<sum;
    return 0;
}