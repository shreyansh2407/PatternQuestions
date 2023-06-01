#include<iostream>
using namespace std;
void numericHollowInvertedHalfPyramid(int n){
    for(int i=0;i<=n;i++){
        int count=i+1;
        for(int j=0;j<n-i;j++){
            
            if( i==0||  j==0  || i == n-j-1 ){
                cout<<count;
                
            }
            else{
                cout<<" ";
                
            }
            count++;
        }
        cout<<endl;
    }
}
int main(){
    numericHollowInvertedHalfPyramid(5);
    return 0;
}