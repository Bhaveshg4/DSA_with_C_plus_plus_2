#include<iostream>
#define n 100
using namespace std;
template <typename T>
class stack{
    T* arr;
    int top;
    public:
    stack(){
        arr=new T[n];
        top=-1;
    }
    void push(T x){
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
    T Top(){
        if(top==-1){
            cout<<"No element in the stack"<<endl;
            return T(); 
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
void insertAtbottom(stack<int>&st,int ele){
    if(st.empty()){
        st.push(ele);


    }
    int topele=st.Top();
    st.pop();
    insertAtbottom(st,ele);
    st.push(topele);
}

template <typename T>
void reverse(stack<T> &st){
    if(st.empty){
        return;
    }
    int ele = st.Top();
    st.pop();
    reverse(st);
    insertAtbottom(st,ele);
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverse(st);
    while(!st.empty()){
        cout<<st.Top()<<endl;
    }
   
    return 0;
}
