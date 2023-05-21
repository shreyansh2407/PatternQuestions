#include<iostream>
using namespace std;
void printPattern8(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int k=0;k<(2*n)-(2*i+1);k++){
                cout<<"*";
            }
            for(int l=0;l<i;l++){
                cout<<" ";
            }
            cout<<endl;
        }
}
int main(){
    printPattern8(4);
    return 0;
}