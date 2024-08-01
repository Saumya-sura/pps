#include<iostream>
using namespace std;
int main(){
    int x,y,a;
    cout<<"Enter a min age ";
    cin>>x;
    cout<<"Enter a max age ";
    cin>>y;
    cout<<"Enter a age ";
    cin>>a;
   if(a>=x && a<=y){
       cout<<"You can take exam";
   }
   else{
       cout<<"you cannot take exam";
   }
    return 0;

    
}