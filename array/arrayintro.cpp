#include<iostream>
using namespace std;
int main(){
    int a[10]={1,2,34,5};
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    int b[10]={0};
    cout<<sizeof(b)<<endl;
    return 0;
}