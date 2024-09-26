#include <iostream>

using namespace std;

int main() {
    int n,max=0;
    cout<<"Enter a number "<<endl;
    cin >> n;

    int sum = n * (n + 1) / 2;
        if(sum%2 ==0){
            max = n;
        }
        else{
            max = n-1;
        }

    cout << max << endl;

    return 0;
}