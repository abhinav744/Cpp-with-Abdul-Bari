#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    //Base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    //Recursive case
    int smallOutput1=fib(n-1);
    int smallOutput2=fib(n-2);
    //Calculation case
    return smallOutput1+smallOutput2;
}
int main(){
    cout<<fib(4);
    return 0;
}