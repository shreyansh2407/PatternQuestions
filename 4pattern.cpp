#include<iostream>
using namespace std;
void printPattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main(){
    printPattern4(4);
    return 0;
}