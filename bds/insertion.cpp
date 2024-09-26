#include <iostream>
using namespace std;
int main() {
    int arr[6];
    int size, pos, new_element;
    cout << "Enter the number of elements (up to 6): ";
    cin >> size;
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Enter position to insert new element (0 to " << size << "): ";
    cin >> pos;
    cout << "Enter the new element: ";
    cin >> new_element;
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = new_element;
    size++;

    cout << "Array elements after insertion:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}