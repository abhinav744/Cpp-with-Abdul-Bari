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
    void setAge(int a){
        age=a;
    }
};
int main(){
    Student s1;
    Student *s2=new Student;

    s1.setAge(20);
    s2->setAge(30);

    s1.display();
    s2->display();
    return 0;
}