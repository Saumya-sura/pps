#include<iostream>
using namespace std;
int main(){

    int pos,size,element;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the elemtn to delete: ";  
    cin>>element;
    for (int i = 0; i < size; i++){
        if (arr[i] == element){
            pos = i;
            break;
        }
    }
    for (int i = pos; i < size-1; i++){
        arr[i] = arr[i+1];
    }
    size--;
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}