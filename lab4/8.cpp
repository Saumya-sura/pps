#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number ";
    cin>>n;
    for(int i=65;i<=122;i++){
        if(i>=91 && i<=96){
            continue;
        }
    
            cout<<char(i)<<" ";
        
    }

}