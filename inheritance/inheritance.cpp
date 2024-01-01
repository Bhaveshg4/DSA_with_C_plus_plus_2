  //To inherit the property of the parent class to the child class
    //there are many types of inheritance in C++
    //1)Single inheritance
    //2) Multiple inheritance
    //3)Multiple level inheritance
    //4)Hybrid inheritance
    //5)Hierarchical inheritance
#include<iostream>
using namespace std;

//Single Inheritance
class A{
    public:
    void func(){
        cout<<"I am class A";
    }
};
class B: public A{

};

// Multiple inheritance
class C{
    public:
    void Afun(){
        cout<<"FUnc C";
    }
};
class D{
    public:
    void Bfun(){
        cout<<"FUnc D";
    }
};
class E: public C, public D{
    public:

};
int main(){
    // single inheritance
    B b;
    b.func();
    //Multiple inheritance
    E e;
    e.Afun();
    e.Bfun();

  

    return 0;
}