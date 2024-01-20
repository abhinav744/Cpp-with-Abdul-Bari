#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"before swap reverse"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int start=0;
    int end=n-1;
    while (start<=end){
        swap(a[start],a[end]);
        start++;
        end--;
    }cout<<endl;
    cout<<"after swap reverse"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    

    return 0;
}