/*  
     1
    1 1
   1 2 1
  1 3 3 1
  1 4 6 4 1


*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int number = 1;
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for(int j = 0; j <= i; j++){
            cout << number << " ";
            number = number * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}