#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> stack;

public:
    // Push operation to insert an element into the stack
    void push(int value) {
        stack.push_back(value);
        cout << value << " pushed into stack.\n";
    }

    // Pop operation to remove the top element from the stack
    void pop() {
        if (stack.empty()) {
            cout << "Stack Underflow. Cannot pop from an empty stack.\n";
        } else {
            int topElement = stack.back();
            stack.pop_back();
            cout << topElement << " popped from stack.\n";
        }
    }

    // Peek operation to view the top element without removing it
    void peek() {
        if (stack.empty()) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Top element is: " << stack.back() << endl;
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return stack.empty();
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.peek();   // Peek top element
    s.pop();    // Pop top element
    s.peek();   // Peek after popping
    s.pop();
    s.pop();
    s.pop();    // Attempt to pop from an empty stack

    return 0;
}
