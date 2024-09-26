#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int reversed[n];
    for (int i = 0; i < n; i++) {
        reversed[i] = arr[n - 1 - i];
    }
    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << reversed[i] << " ";
    }
    cout << endl;

    return 0;
}
