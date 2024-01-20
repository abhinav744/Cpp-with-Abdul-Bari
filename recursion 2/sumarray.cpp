#include<iostream>
using namespace std;
// int sumArray(int a[],int n){
//     if(n==0){
//         return 0;
//     }
//     return a[0]+sumArray(a+1,n-1);
// }
// int sumArray2(int a[],int n){
//     if(n==0){
//         return 0;
//     }
//     return a[n-1]+sumArray2(a,n-1);
// }
int sumArray3(int a[],int n,int i){
    if(i==n){
        return 0;
    }
    return a[i]+sumArray3(a,n,i+1);
}
int main(){
    int a[]={1,2,3,4,5};
    cout<<sumArray3(a,5,0);
    return 0;
}