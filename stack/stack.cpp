#include <iostream>
using namespace std;

#define MAX 100  // Define maximum size for the stack

class Stack {
private:
    int stack[MAX];  // Array to hold stack elements
    int top;         // Tracks the index of the top element

public:
    // Constructor to initialize the stack
    Stack() {
        top = -1;  // Initialize top to -1, indicating an empty stack
    }

    // Push operation to insert an element into the stack
    void push(int value) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow. Cannot push " << value << " into stack.\n";
        } else {
            stack[++top] = value;
            cout << value << " pushed into stack.\n";
        }
    }

    // Pop operation to remove the top element from the stack
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow. Cannot pop from an empty stack.\n";
        } else {
            cout << stack[top--] << " popped from stack.\n";
        }
    }

    // Peek operation to view the top element without removing it
    void peek() {
        if (top < 0) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Top element is: " << stack[top] << endl;
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;
    s.push(10);    // Push 10 onto the stack
    s.push(20);    // Push 20 onto the stack
    s.push(30);    // Push 30 onto the stack
    s.peek();      // Peek top element (should be 30)
    s.pop();       // Pop top element (30)
    s.peek();      // Peek top element (should be 20)
    s.pop();       // Pop top element (20)
    s.pop();       // Pop top element (10)
    s.pop();       // Try to pop from an empty stack (Underflow)

    return 0;
}
