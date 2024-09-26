#include <iostream>
using namespace std;

int main() {
    int arr[6];
    int size;

    cout << "Enter the number of elements (up to 6): ";
    cin >> size;

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int new_element;

    cout << "Enter the new element to add: ";
    cin >> new_element;

    if (size < 6) {
        arr[size] = new_element;
        size++;
    }

    cout << "Array elements after insertion:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
