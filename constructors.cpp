
//constructors and its type
#include<iostream>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;
    student(){
        cout<<"Default constructors"<<endl;
    }
    student(string s, int a, int g){
        cout<<"Parametarised  constructors"<<endl;
        name=s;
        age=a;
        gender=g; //parametarised constructors
    }
    student(student &a){
        // default constructors always performs shallow coppy
        // coppy constructors
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    void setName(string s){
        name = s;
    }
    void getName(){
        cout<<name<<endl;
    }
    void printInfo(){
        cout<<"Name=";
        cout<<name<<endl;
        cout<<"age=";
        cout<<age<<endl;
        cout<<"GENDER=";
        cout<<gender<<endl;
    }
};
int main(){
    student a("Urvi",20,1);
    a.printInfo();
    student b;
    student c;
    //supppose we have to coppy all the values of student a into student c
    //for this we need a special type of constructor that is a coppy constructor
    student c =a;  //coppy constructor

    return 0;
}
