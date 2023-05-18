#include<iostream>
using namespace std;
void printPattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    printPattern3(4);
    return 0;
}