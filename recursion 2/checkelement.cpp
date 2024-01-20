#include<iostream>
using namespace std;
bool isPresent4(int a[],int n,int x,int i){
    if(i==n){
        return false;
    }
    if(a[i]==x){
        return true;
    }
    return isPresent4(a,n,x,i+1);
}
int main(){
    int a[]={1,2,3,4,5};
    if(isPresent4(a,5,33,0)){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}