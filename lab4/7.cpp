#include<iostream>
using namespace std;
int main(){

    int n,prime=1;
    cout<<"Enter a number ";
    cin>>n;
    for(int i =2;i<=n/2;i++){
        if(n%1 ==0){
            prime =0;
            break;
        }
    }
    if(prime==1){
        cout<<"Prime number";
    }
    else{
        cout<<"Not a prime number";
    }
    return 0;
}