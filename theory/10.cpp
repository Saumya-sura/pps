#include <iostream>
using namespace std;
int main() {
    int n;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int nums[n];
    
    cout << "Enter the elements  ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < n - 1; i += 2) {
        if (nums[i] != nums[i + 1]) {
            cout << "The single number is: " << nums[i] << endl;
            return 0;
        }
    }

    
    cout << "The single number is: " << nums[n- 1] << endl;

    return 0;
}
