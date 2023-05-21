#include<iostream>
using namespace std;
void printPattern7(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(int k=0;k<(2*i)+1;k++){
                cout<<"*";
            }
            for(int l=0;l<n-i-1;l++){
                cout<<" ";
            }
            cout<<endl;
        }
}
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
void printPattern9(int n){
    printPattern7(n);
    printPattern8(n);
}
int main(){
    printPattern9(5);
    return 0;
}