#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    //1st step: base class 
    if(n==0){
        return 1;
    }
    int smallAns=fact(n-1);  //2nd step: assumption recursive
    int ans=n*smallAns;      //3rd step: calculation
    return ans;
}
int main(){
    cout<<fact(5)<<endl;
    return 0;
}