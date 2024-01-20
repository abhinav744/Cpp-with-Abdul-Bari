#include<iostream>
using namespace std;
void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n<<endl;
}
void print2(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print2(n-1);
   
}
int main(){
    //print(5);
    print2(5);
    return 0;
}