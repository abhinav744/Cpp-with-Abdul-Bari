#include<iostream>
using namespace std;
class Student{
    public:

    //default constructor
    Student(){
        cout<<"Constructor called"<<endl;
    }

    //parameterized constructor
    Student(int a){
        cout<<"Constructor 2 called"<<endl;
    }

    //parameterized constructor
    Student(int a,int b){
        cout<<"this "<<this<<endl;
        cout<<"Constructor 3 called"<<endl;
    }

    //destructor
    ~Student(){
        cout<<"Destructor called"<<endl;
    }

};
int main(){
    Student s1;
    Student s2;
    Student *s3=new Student;
    // Student ->3;
    Student s4(10);
    Student s6(s4);
    Student s5(10,10);
    cout<<"Address of s5 "<<&s5<<endl;
    return 0;
}