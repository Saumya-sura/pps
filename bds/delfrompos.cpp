#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the szie ";
     cin>>n;
     int arr[n];
     cout<<"enter elemnts ";
     for (int i=0;i<n;i++){
         cin>>arr[i];
     }
    int pos,size;
    cout<<"enter pos ";
    cin>>pos;
    for(int i = pos;i<n-1;i++){
     arr[i] = arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
    return 0;
}