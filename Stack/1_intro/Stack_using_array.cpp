#include <iostream>

class Stack {
private:
    static const int MAX_SIZE = 100;  // Maximum size of the stack
    int arr[MAX_SIZE];
    int top;  // Index of the top element in the stack

public:
    // Constructor
    Stack() {
        top = -1;  // Initialize the stack with an empty state
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return (top == -1);
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (top == MAX_SIZE - 1) {
            std::cout << "Stack overflow! Cannot push more elements.\n";
            return;
        }
        arr[++top] = value;
        std::cout << value << " pushed to the stack.\n";
    }

    // Function to pop an element from the stack
    void pop() {
        if (isEmpty()) {
            std::cout << "Stack underflow! Cannot pop from an empty stack.\n";
            return;
        }
        int poppedValue = arr[top--];
        std::cout << poppedValue << " popped from the stack.\n";
    }

    // Function to get the top element of the stack without popping it
    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty. No element to peek.\n";
            return -1;  // You can choose another value to represent an error or use exception handling
        }
        return arr[top];
    }
};

int main() {
    Stack myStack;

    myStack.push(5);
    myStack.push(10);
    myStack.push(15);

    std::cout << "Top element of the stack: " << myStack.peek() << std::endl;

    myStack.pop();
    myStack.pop();

    std::cout << "Is the stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
