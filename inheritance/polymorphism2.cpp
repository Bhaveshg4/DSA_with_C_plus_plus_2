#include<iostream>
using namespace std;

//Operator overloading

class Complex{
private:
    int realPart, Imaginary;
        public://creating a constructor
            Complex(int r=0, int i=0){
              realPart = r;
              Imaginary = i;
            }
    Complex operator + (Complex const &obj){
        Complex c;
        c.Imaginary = Imaginary + obj.Imaginary;
        c.realPart = realPart + obj.realPart;
        return c;
    }
    void display(){
        cout<<realPart<< " + i"<<Imaginary;
    }
};
int32_t main(){
    Complex c1(12,7);
    Complex c3(23,4);
}