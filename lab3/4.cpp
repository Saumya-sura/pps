/*
Develop a program to calculate the electricity bill including a discount based on the total bill amount. The initial base bill is 100 Rs, 
and the program should calculate the total bill amount by multiplying the number of units consumed by 10 Rs per unit and then adding this 
amount to the base bill. 
The discount should be applied according to predefined ranges of bill amounts based on the following ranges:
*/
#include<iostream>
using namespace std;
int main(){
    float total;
    int initial =100,units=10,unitsconsumed,dis;
    cout<<"Enter the units consumed ";
    cin>>unitsconsumed;
    total = initial+(unitsconsumed*units);
    if(total>1100){
        dis =20;
    }
    else if(total>800){
        dis =15;
    }
    else if(total>500){
        dis =10;
    }
    else if (total>200)
    {
        dis =5;
    }
    else
    {
        dis =0;
    }
   
   dis = (total*dis)/100;
    
    cout<<"Total bill is "<<total<<endl;
    cout<<"Discount is "<<dis<<endl;
    total = total-dis;
    cout<<"Total after discount is "<<total;

    
    return 0;
}