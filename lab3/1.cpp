//GST
#include<iostream>
using namespace std;
int main(){

    int gst,after,rate,SP,total;
    cout<<"Enter the amt ";
    cin>>gst;
    cout<<"Enter the rate ";
    cin>>rate;
    cout<<"Enter selling price ";
    cin>>SP;
    total = (SP*gst)/100;
    cout<<"Total GST is "<<total<<endl;
    after  = gst+total;
    cout<<"Total after GST is "<<after<<endl;
    cout<<"Befotre "<<gst;
}