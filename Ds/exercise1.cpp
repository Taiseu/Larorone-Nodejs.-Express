#include <iostream>
using namespace std;
#define MAX_STACK 7
struct Stack {
    int top;
    char nod[MAX_STACK];
    void init() {
        top = -1;
    }
    void push(char item) {
        if (top == MAX_STACK - 1) {
            cout << "Cannot add item Stack Overflow" << endl;
        } else {
            top++;
            nod[top] = item;
        }
    }
    char pop() {
        if (top == -1) {
            cout << "Cannot get item Stack Underflow" << endl;
            return 0;
        } else {
            char item = nod[top];
            top--;
            return item;
        }
    }
};
int main() {
    Stack myStack;
    myStack.init();
    for (int i = 0; i < MAX_STACK; i++) {
        cout << "Enter item to push: ";
        char item;
        cin >> item;
        myStack.push(item);
    }
    for (int i = 0; i < MAX_STACK; i++) {
        char item = myStack.pop();
        cout << "Item from stack : " << item << endl;
    }
    return 0;
}