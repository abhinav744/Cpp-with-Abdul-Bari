#include<iostream>
using namespace std;
int length(char input[]){
    if(input[0]=='\0'){
        return 0;
    }
    return 1+length(input+1);
}
int convstrtoint(char str[],int n){
    if(n==0){
        return 0;
    }
    int smallAns=convstrtoint(str,n-1);
    int lastdigit=str[n-1]-'0';
    int ans=smallAns*10+lastdigit;
    return ans;
}
int main(){
    char str[]="12345";
    int n=length(str);
    int a=convstrtoint(str,n);
    cout<<a<<endl;
    return 0;
}