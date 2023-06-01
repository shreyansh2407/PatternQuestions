#include<iostream>
using namespace std;
void numericHalfFullPyramid(int n){
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                cout<<count<<" ";
                count++;
            }
            else{
                cout<<"  ";
                count++;
            }
        }
        cout<<endl;
    }
}

int main(){
    numericHalfFullPyramid(5);
    return 0;
}