#include<iostream>
using namespace std;
int lastIndex(int a[],int n,int x,int i){
    if(i==-1){
        return -3;
    }
    if(a[i]==x){
        return i;
    }
    return lastIndex(a,n,x,i-1);
}
int lastindex2(int a[],int n,int x){
    if(n==0){
        return -3;
    }
    if(a[n-1]==x){
        return n-1;
    }
    return lastindex2(a,n-1,x);
}
int main(){
    int a[]={1,2,3,4,4,5};
    cout<<lastindex2(a,4,5);
    return 0;
}