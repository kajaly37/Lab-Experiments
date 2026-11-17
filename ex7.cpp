#include <iostream>
#include <string>

using namespace std;

#define MAX 5

template <class T>
class Stack {
private:
    T arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(T value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed into stack" << endl;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        cout << arr[top--] << " popped from stack" << endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    
    cout << "--- Integer Stack ---" << endl;
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.display();
    intStack.pop();

    cout << endl;

    
    cout << "--- Float Stack ---" << endl;
    Stack<float> floatStack;
    floatStack.push(2.5f);
    floatStack.push(4.5f);
    floatStack.display();

    cout << endl;

    
    cout << "--- String Stack ---" << endl;
    Stack<string> stringStack;
    stringStack.push("Hello");
    stringStack.push("C++");
    stringStack.display();

    return 0;
}