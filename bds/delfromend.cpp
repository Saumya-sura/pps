#include <iostream>
using namespace std;

int main() {
    int arr[6]; 
    int size;

    cout << "Enter the number of elements (up to 6): ";
    cin >> size;

    if (size > 6) {
        size = 6;
    } else if (size < 0) {
        size = 0;
    }

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    if (size > 0) {
        size--;
    }

    cout << "Array elements after decrementing size:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
