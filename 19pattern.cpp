#include<iostream>
using namespace std;
void printPattern19(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    int count=2*n-2;
       for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<count;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        count-=2;
        cout<<endl;
    }
}
int main(){
    printPattern19(5);
    return 0;
}