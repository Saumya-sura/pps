#include <iostream>
using namespace std;

#define MAX 100 

struct Stack {
    int arr[MAX];
    int top;

    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack is full!" << endl;
        } else {
            arr[++top] = value;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
        } else {
            top--;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
        } else {
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack contents: ";
    s.display();

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    cout << "Stack after pop: ";
    s.display();

    return 0;
}
