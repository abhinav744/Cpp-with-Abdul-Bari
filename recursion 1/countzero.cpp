#include<bits/stdc++.h>
using namespace std;
int countZero(int n){
    if(n==0){
        return 0;
    }
    int smallAns=countZero(n/10);
    int last_digit=n%10;
    if(last_digit==0){
        return 1+smallAns;
    }
    else{
        return smallAns;
    }

}
int main(){
    cout<<countZero(2290022);
    return 0;
}