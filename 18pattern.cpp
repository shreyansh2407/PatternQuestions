#include<iostream>
using namespace std;
void printPattern18(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    printPattern18(5);
    return 0;
}