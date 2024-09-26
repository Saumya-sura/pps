//If the percentage marks secured are greater than or equal to 90, the student is awarded grade A; but if they are greater than or equal to 80 but less than 90, Grade B is awarded; if they are greater than or equal to 65 but less than 80, Grade C is awarded; otherwise, Grade D is awarded. 
#include<iostream>
using namespace std;
int main(){
    float percentage;
    cout<<"Enter ur percentrage %"<<endl;
    cin>>percentage;
    if (percentage>=90)
    {
        cout<<"U are awarded grade A"<<endl;
    }
    else if(percentage<90 && percentage>=80){
        cout<<"U are awarded grade B"<<endl;
    }
    else if (percentage>=65 && percentage<=80){
        cout<<"Grade C is awarded ";
    }
    else{
        cout<<"Grade D";
    }
    

    return 0;
}