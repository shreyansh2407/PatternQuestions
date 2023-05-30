#include<iostream>
using namespace std;
void hollowSquarePattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0  || j==0 || j==n-i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    hollowSquarePattern(6);
    return 0;
}