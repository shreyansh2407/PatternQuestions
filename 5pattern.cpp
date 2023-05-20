#include<iostream>
using namespace std;
void printPattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    printPattern5(4);
    return 0;
}