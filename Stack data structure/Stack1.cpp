//Stores a list of items in which an item can be added to or removed from the list only 
//at one end
//last in first out, jo last ma andar jayega woh firstly bahar niklega
//push()= insert data at top
//pop() = remove the top element
//top()= returns the top most element
//empty()= tells if stack is empty or not
//time complexity= O(1)
#include<iostream>
#define n 100
using namespace std;
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top==n-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        return arr[top];


    }
    bool empty(){
        return top==-1;
    }

};
int main(){
    stack NewStack;
    NewStack.push(1);
    NewStack.push(2);
    NewStack.push(3);
    NewStack.push(4);
    cout<<NewStack.Top()<<endl;
    NewStack.pop();
    cout<<NewStack.Top()<<endl;
    NewStack.pop();
    NewStack.pop();





    return 0;
}