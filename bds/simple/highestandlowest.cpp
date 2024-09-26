#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int highest = arr[0];
    int lowest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > highest) {
            highest = arr[i];
        }
        if (arr[i] < lowest) {
            lowest = arr[i];
        }
    }

    cout << "Highest: " << highest << endl;
    cout << "Lowest: " << lowest << endl;

    return 0;
}
