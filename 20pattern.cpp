#include<iostream>
using namespace std;
void printPattern20(int n){
    int spaces=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }

        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n){
            spaces=spaces-2;
        }
        else{
            spaces = spaces+2;
        }
        
    }
}
int main(){
    
    printPattern20(5);
    return 0;
}