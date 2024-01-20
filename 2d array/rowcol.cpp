#include<iostream>
using namespace std;
void printArray(int a[][5],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
}

int main(){
    int a[][5]={{1,2},{3,4}};
    printArray(a,2,5);
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    //Row wise printing
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    //Column wise printing
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<" "<<a[j][i];
        }
        cout<<endl;
    }
    return 0;
}