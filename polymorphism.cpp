#include<iostream>
using namespace std;
//Polymorphism
// many forms
//Types of polymorphism:
//1) Compile time ---------------------> a)function overloading  b)operator overlading
//2) RUn time -------------------------> Virtual functions



//functional Overloading
//same name functions defined multiple times
class ApnaCollege{
    public:
    void funct(){
        cout<<"I am a function  with no args"<< endl;
    }
    void funct(int x){
            cout<<"I am a function with args"<<endl;

    };
    void funct(double x){
        printf("I am a function with two args");
    };

};
int32_t main(){
    ApnaCollege obj;
    obj.funct();
    obj.funct(4);
    obj.funct(2.1);
}
