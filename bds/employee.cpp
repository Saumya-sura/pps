#include<iostream>
using namespace std;

struct Stack {
    int arr[10];
    int top;

    Stack() {
        top = -1;
    }

    void push(int item) {
        if (top >= 9) {
            cout << "Error! Overflow.";
        } else {
            top += 1;
            arr[top] = item;
        }
    }

    void display() {
        if (top == -1) {
            cout << "\nError! No employee" << endl;
        } else {
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack;
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    int ids[n];
    cout << "Enter employee ids of " << n << " employees-";
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ": ";
        cin >> ids[i];
        stack.push(ids[i]);
    }

    cout << "\nOrder in which employees will be laid off-" << endl;
    stack.display();

    return 0;
}
