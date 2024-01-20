#include<iostream>
using namespace std;
int main(){
    char name[10];
    cout<<"Enter your name: ";
    cin>>name;
    name [2]='d';
    cout<<"Your name is: "<<name;
    

    return 0;
}