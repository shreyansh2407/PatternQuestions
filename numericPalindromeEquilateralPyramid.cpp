#include<iostream>
using namespace std;
void numericPalindromeEquilateralPyramid(int n){
    for(int i=0;i<n;i++){
        int count = 1;
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
             
            if(j<i){
                cout<<count;
                count++;
            }
            else{
                
                cout<<count;
                count--;
                
            }
        }
        cout<<endl;
    }
}
int main(){
    numericPalindromeEquilateralPyramid(5);
    return 0;
}