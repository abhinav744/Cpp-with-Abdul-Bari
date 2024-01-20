#include<iostream>
using namespace std;
class Student{
    public:
        int rollNumber;
    private: 
        int age;
    public:
    void display(){
        cout<<age<<" "<<rollNumber<<endl;
    }
    int getAge(){
        return age;
    }
};
int main(){
    //creating statically
    Student s1;
    Student s2;

    //creating dynamically
    Student *s6=new Student;

    //s1.age=24;
    s2.rollNumber=12;

    cout<<"s1: "<<s1.getAge()<<endl;
    cout<<"s2: "<<s2.getAge()<<endl;

    //cout<<s1.age<<endl;
    cout<<"s2: "<<s2.rollNumber<<endl;

    //(*s6).age=24;
    (*s6).rollNumber=4;

    //s6->age=24;
    s6->rollNumber=4;

    cout<<"s6: "<<(*s6).rollNumber<<endl;
    return 0;
}