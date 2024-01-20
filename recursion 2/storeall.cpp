#include<bits/stdc++.h>
using namespace std;
void saveAllPos(int a[],int n,int x,int i,vector<int> &ans){
    if(i==n){
        return ;
    }
    if(a[i]==x){
        ans.push_back(i);
    }
    saveAllPos(a,n,x,i+1,ans);
}
int main(){
    int a[]={5,4,8,9,1,7};
    vector<int>v;
    saveAllPos(a,6,1,0,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}