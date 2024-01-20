#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int smallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }cout<<"Smallest value is: "<<smallest<<endl;

    return 0;
}