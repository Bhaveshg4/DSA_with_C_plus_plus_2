#include<iostream>
using namespace std;
//multiple level inheritance
class A{
    public:
    void Afun(){
        cout<<"Function A";
    }
};
class B: public A{
    public:
    void Bfun(){
        cout<<"Func B";
    }
};
class C: public B{
    public:
};
int main(){
    C c;
    c.Afun();
    c.Bfun();


}
//hybrid inheritance
//the mixture of more than 1 types of inheritance is called Hybrid inheritance
//Hierarchical inheritance: inheritance in a hietatchical form: example: tree inheritance