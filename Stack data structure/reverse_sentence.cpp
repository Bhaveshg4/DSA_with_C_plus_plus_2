#include <iostream>
#include <string>
#define n 100
using namespace std;

template <typename T>
class Stack {
    T* arr;
    int top;

public:
    Stack() {
        arr = new T[n];
        top = -1;
    }

    void push(T x) {
        if (top == n - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }

    T Top() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
            return T();
        }
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }
};

void reverseStack(string s) {
    Stack<string> newStack;  
    for(int i =0; i < s.length(); i++){
        string word = "";
        while(s[i] != ' ' && i < s.length()){
            word += s[i];
            i++;
        }
        newStack.push(word);
    }

    while(!newStack.empty()){
        cout << newStack.Top() << " ";  
        newStack.pop();
    }

    cout << endl;
}

int main() {
    string s = "Hey!, Whats your name tommy?";
    reverseStack(s);

    return 0;
}
