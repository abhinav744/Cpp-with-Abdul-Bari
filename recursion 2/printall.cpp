#include<iostream>
using namespace std;
void printAllPos(int a[],int n,int x,int i){
    if(i==n){
        return;
    }
    if(a[i]==x){
        cout<<i<<" ";
    }
    printAllPos(a,n,x,i+1);
}
int main(){
    int a[]={1,2,3,4,4,5};
    printAllPos(a,6,4,0);
    return 0;
}