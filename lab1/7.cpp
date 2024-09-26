//traingle valid or not 
#include <iostream>
using namespace std;
int main()
{

    int s1,s2,s3;
    cout<<"Enter 3 sides ";
    cin>>s1>>s2>>s3;
    if (s1+s2+s3 !=180){
        cout<<"Invalid ";
    }
    else{
    if(s1 ==s2 && s1 ==s3){
        cout<<"EQuilateral ";
    }
    else if (s1 ==s2 ||s2 ==s3 || s1 ==s3)
    {
        cout<<"Isosceles ";
    }
    else
    {
        cout<<"Scalene ";
    }
    }
    return 0;
}