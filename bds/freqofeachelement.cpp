#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                found = true;
                break;
            }
        }
        if (!found) {
            int frequency = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    frequency++;
                }
            }
            cout << "Element " << arr[i] << ": " << frequency << " times" << endl;
        }
    }

    return 0;
}
