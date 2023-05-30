#include<iostream>
using namespace std;
void fancyPattern(int n){
    for(int i=1;i<=n;i++){
        int count=i;
        for(int j=1;j<=2*n-i-1;j++){
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
            cout<<count<<"*";
        }
        for(int j=1;j<=2*n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    fancyPattern(4);
    return 0;
}