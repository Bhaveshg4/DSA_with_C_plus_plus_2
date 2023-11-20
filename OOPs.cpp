#include<iostream>
#include<string>
using namespace std;

class student{
    //In C++ a class is by default private,you have to make it public by
    //Specifiying it
    // The data written before the public keyword will not come under public
    /*Ex:
    sting name;                   here the string name is not public to other classes but int is
    public:
    int age*/ 
    public:
     string name;
     int age;
     string div;
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
    student bhavesh;
    bhavesh.name = "Bhavesh C.S Gupta";
    bhavesh.age = 20;
    bhavesh.div = "ELectronics Engineering";
    cout<<bhavesh.name;

    //for declaring the data of more than 1 student
    student arr[4];
    for(int i = 0;i<5;i++){
        cout<< "Please enter the names of the student";
        cin>>arr[i].name;
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