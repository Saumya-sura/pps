#include<iostream>
using namespace std;
int main(){
    int n,sum=0,rem,og;
    cout<<"Enter a number ";
    cin>>n;
    og =n;
    while(n!=0){
        rem = n%10;
        sum = sum*10 + rem;
        n = n/10;
    }
    if(og == sum){
        cout<<"Palindrome number";
    }
    else{
        cout<<"Not a Palindrome number";
    }
    return 0;
}