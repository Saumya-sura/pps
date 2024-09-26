#include<iostream>
using namespace std;
class Product{
    public:
    string Productname;
    int id;
    static const int n = 1000;

    double qt,price;
    void Prodcut(){
        Productname = " ";
        id = 0;
        qt = 0;
        price = 0;
    }
    void add();
    void show();
};
void Product:: add(){
    
     int n;
     cout<<"enter numbew rof products ";
     cin >>n;
    for (int i =1;i<n;i++){
    cout<<"Enter name ";
    cin>>arr[i].Productname;
    cout<<"Enter id ";
    cin>>id;
    cout<<"enter qt";
    cin>>qt;
    cout<<"Enter price ";
    cin>>price;
    }
};
void Product:: update(){
    int id;
    cout<<"Enter id to update ";
    cin>>id;
    for (int i =1;i<n;i++){
        if (arr[i].id == id){
            cout<<"Enter name ";
            cin>>arr[i].Productname;
            cout<<"Enter id ";
            cin>>id;
            cout<<"enter qt";
            cin>>qt;
            cout<<"Enter price ";
            cin>>price;
        }
    }
};
void Product:: show(){
    for (int i =1;i<n;i++){
        cout<<"Product name "<<arr[i].Productname;
        cout<<"Product id "<<arr[i].id;
        cout<<"Product qt "<<arr[i].qt;
        cout<<"Product price "<<arr[i].price;
    }
};
int main(){
   Product p;
   p.add(); 
}   