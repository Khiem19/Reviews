#include <iostream>
#include <stack>

using namespace std;

void displayStack(stack<int> s) {
        cout << "Stack (top to bottom):" << endl;
    while (!s.empty()) {
        cout << s.top() << endl;            // Print the top element
        s.pop();                            // Remove the top element
    }
}

int main() {
    //empty, size, push, pop, top
    stack<int>  numbersStack;

    for(int i = 0; i < 10; i++) {
        numbersStack.push(i);
    }

    if (numbersStack.empty()) {
        cout << "Empty stack" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }
    
    cout << "Stack szie is " << numbersStack.size() << endl;
    
    numbersStack.pop(); //remove 1st from the top of the stack

    displayStack(numbersStack);

    return 0;
}

