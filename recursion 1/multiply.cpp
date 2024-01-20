#include<iostream>
using namespace std;
int multiply(int m,int n){
    if(n==0){
        return 0;
    }
    int smallAns=multiply(m,n-1);
    return smallAns+m;
}
int main(){
    cout<<multiply(2,3);
    return 0;
}