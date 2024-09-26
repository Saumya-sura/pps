#include<iostream>
using namespace std;
int main()
{
    
    int h,w,p,b,n,area,max=0,no;
    cout<<"Enter the number of tablet shops u visited "<<endl ;
    cin>>n;
    cout<<"Enter ur budget "<<endl;
    cin>>b;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the  width height and price of the tablet "<<endl;
        cin>>w>>h>>p;
        if(p<=b){
            area = w*h;
            if (area>max)
            {
                max = area;
                no = i+1;
            }
            
        }
    }
    if (max!=0)
    {
      cout<< "Buy the table with area "<<max<<" that is "<<no;
    }
    
    
}