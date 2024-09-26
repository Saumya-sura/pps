/* 
1
12
123
1234
123
12

*/


#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i = 1; i <= 2*n-1; i++){
        int k = (i <= n) ? i : 2*n-i;
        for(int j = 1; j <= k; j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
