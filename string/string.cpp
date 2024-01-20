#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s="abc";
    cout<<s<<endl;

    string s2;
    s2="def";
    cout<<s2<<endl;

    string *sp=new string;
    *sp="mno";
    cout<<sp<<endl;
    cout<<*sp<<endl;

    vector<string>v;
    v.push_back(s);
    v.push_back("hello");
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
        sort(v[i].begin(),v[i].end());
        cout<<v[i]<<endl;
    }

    string s3;
    // getline(cin,s3);
    // cout<<s3<<endl;
    s3="abcdef";
    cout<<s3[1]<<endl;
    // s3[0]='e';
    cout<<s3<<endl;

    string s4=s3+s2;
    cout<<s4<<endl;
    cout<<s3<<endl;
    cout<<s2<<endl;
    cout<<s4.size()<<endl;
    cout<<s4.length()<<endl;

    cout<<s4.substr(3)<<endl;
    cout<<s4.substr(3,4)<<endl;

    cout<<s4.find("def")<<endl;

    int a=123;
    string s5=to_string(a);
    cout<<s5<<endl;
    s5[1]='9';
    cout<<s5<<endl;

    s5.push_back('6');
    cout<<s5<<endl;

    a=atoi(s5.c_str());
    cout<<a<<endl;
    return 0;
}