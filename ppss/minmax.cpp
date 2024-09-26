#include <iostream>

using namespace std;

int main() {
    int num, sum = 0;
    int maxNum = 0, minNum = 0;
    float count = 0;

    cout << "Enter positive integers (enter -1 to stop):" << endl;

    while (true) {
        cin >> num;

        if (num == -1) {
            break;
        }

        if (num < 0) {
            cout << "Only positive integers are allowed!" << endl;
            continue;
        }

        sum += num;
        count++;

        if (count == 1) {
            maxNum = minNum = num;
        } else {
            if (num > maxNum) {
                maxNum = num;
            }
            if (num < minNum) {
                minNum = num;
            }
        }
    }

    if (count > 0) {
        float average = sum / count;  
        cout << "Count: " << count << endl;
        cout << "Maximum: " << maxNum << endl;
        cout << "Minimum: " << minNum << endl;
        cout << "Average: " << average << endl;
        cout<<"the sum is "<<sum<<endl;
    } else {
        cout << "No numbers were entered." << endl;
    }

    return 0;
}
