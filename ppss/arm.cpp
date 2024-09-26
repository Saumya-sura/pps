#include <iostream>
using namespace std;
int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;    
    for (int num = start; num <= end; num++) {
        int originalNum = num;
        int sum = 0;
        int n = 0;
        
        int temp = num;
        while (temp > 0) {
            temp /= 10;
            n++;
        }
        
        temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            int product = 1;
            
            for (int i = 0; i < n; i++) {
                product *= digit;   
            }
            
            sum += product;
            temp /= 10;
        }
        
        if (sum == num) {
            cout << num << " is an Armstrong number." << endl;
        }
    }
    
    return 0;
}
