#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> *vp=new vector<int>();
    vector<int> v;

    for(int i=0;i<100;i++){
        cout<<"Capacity "<<v.capacity()<<endl;
        cout<<"Size "<<v.size()<<endl;

        v.push_back(i+1);
    }
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);

    // v[1]=100;

    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    // cout<<v[2]<<endl;
    return 0;
}