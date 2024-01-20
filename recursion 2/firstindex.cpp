#include<iostream>
using namespace std;
int firstindex(int a[],int n,int x,int i){
    if(i==n){
        return -1;
    }
    if(a[i]==x){
        return i;
    }
    return firstindex(a,n,x,i+1);
}
int main(){
    int a[]={1,2,3,2,2};
    cout<<firstindex(a,5,2,0);
    return 0;
}