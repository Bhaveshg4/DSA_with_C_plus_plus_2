#include<iostream>
#include<string>
using namespace std;

class student{
    string name;
    public:
     int age;
     string div;
     //for accessing the private variables:
     void setName(string s){
        name = s;
     }
     void printtInfo(){
        cout<<"Name of student:";
        cout<<name<<endl;
        cout<<"Age of student:";
        cout<<age<<endl;
        cout<<"Division of the student";
        cout<<div<<endl;

     }
    

};
int main(){
    // student bhavesh;

    // bhavesh.name = "Bhavesh C.S Gupta";
    // bhavesh.age = 20;
    // bhavesh.div = "ELectronics Engineering";
    // cout<<bhavesh.name;

    //for declaring the data of more than 1 student
    student arr[4];
    for(int i = 0;i<5;i++){
        string s;   //modification for accessing the
        cout<< "Please enter the names of the student";
        string s;
        cin>>s;
        arr[i].setName(s);//calling the method by passing the string s
        cout<<"Please enter the age of students";
        cin>>arr[i].age;
        cout<<"Enter the division of the Student";
        cin>>arr[i].div;

    }
    for (int i = 0; i < 3; i++)
    {
        arr[i].printtInfo();
    }   
    return 0;
}