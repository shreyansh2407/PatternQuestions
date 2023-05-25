#include<iostream>
using namespace std;

void printPattern13(int n){
    
    for(int i=1;i<=n;i++){
        int count=65;
        for(int j=1;j<=i;j++){
            cout<<char(count)<<" ";
            count++;
        }
        cout<<endl;
    }
}
int main(){
    printPattern13(4);
    return 0;
}