#include<iostream>
using namespace std;

void printPattern13(int n){
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
int main(){
    printPattern13(4);
    return 0;
}