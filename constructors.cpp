
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
        name=s;
        age=a;
        gender=g;
    }
    //parametarised constructors
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

    return 0;
}
