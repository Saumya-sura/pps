#include <iostream>
using namespace std;

int main() {
    int x1, x2;
    cout << "Enter the initial position of Sahil (x1): ";
    cin >> x1;
    cout << "Enter the initial position of Dev (x2): ";
    cin >> x2;
    
    int t = 0;
    while (true) {
        int sahilPos = x1 + t;
        int DevPos = x2 + 2 * t;
        
        if (sahilPos == DevPos) {
            cout << "Sahil will meet Dev after " << t << " seconds." << endl;
            break;
        }
        
        if ((sahilPos > DevPos && x1 < x2) || (sahilPos < DevPos && x1 > x2)) {
            cout << "Sahil will never meet Dev." << endl;
            break;
        }
        
        t++;
    }
    
    return 0;
}
