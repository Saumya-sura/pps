#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    private:
        Node* top;

    public:
        Stack() {
            top = nullptr;
        }

    // Push a value onto the stack
    void push(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = top;
        top = newNode;
        cout << val << " pushed to stack." << endl;
    }

    // Pop a value from the stack
    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow! Cannot pop from an empty stack." << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << temp->data << " popped from stack." << endl;
        delete temp; // Free memory
    }

    // Peek the top value of the stack
    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty." << endl;
            return -1; // Return an error value
        }
        return top->data;
    }

    // Display the entire stack
    void disp() {
        if (top == nullptr) {
            cout << "Stack is empty." << endl;
            return;
        }
        Node* temp = top;
        cout << "Stack elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.disp();   // Display stack elements

    s.pop();    // Pop an element
    s.disp();   // Display stack after pop

    cout << "Top element is: " << s.peek() << endl;  // Peek at top element

    return 0;
}
