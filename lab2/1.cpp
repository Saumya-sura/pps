#include<iostream>
using namespace std;
int main()
{
    int age;
    float height;
    char name[20],gender[10],city[20];

    cout<<"Enter ur name "<<endl;
    cin>>name;
    cout<<"Enter ur age :"<<endl;
    cin>>age;
    cout<<"Enter ur height ";
    cin>>height;
    cout<<"Enter ur gender ";
    cin>>gender;
    cout<<"enter ur city ";
    cin>>city;


    cout<<"Your name is "<<name<< " and age is "<<age<<endl;
    cout<<"you live in "<<city<<" and  gender is "<<gender<<endl;
    cout<<"You height is "<<height;

    return 0;
}