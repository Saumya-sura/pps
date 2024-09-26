#include<iostream>
using namespace std;
int main(){
    int n,og,rem,sum=0;
    cout<<"Enter a number ";
    cin>>n;
    og =n;
    while(n>0){
        rem = n%10;
        sum = sum + rem*rem*rem;
        n = n/10;
    }
    if(og == sum){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an Armstrong number";
    }
    return 0;
}