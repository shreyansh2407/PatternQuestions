#include<iostream>
using namespace std;

void printPattern13(int n){
    int count =65;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            cout<<char(count+i-1);
            
        }
        cout<<endl;
    }
}
int main(){
    printPattern13(4);
    return 0;
}