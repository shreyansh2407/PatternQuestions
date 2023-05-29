#include<iostream>
using namespace std;
void pattern22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int bottom=(2*n-2)-i;
            
            int left=j;
            int right=(2*n-2)-j;
            cout<<(n-min(min(left,right),min(top,bottom)));
        }
        cout<<endl;
    }
}
int main(){
    pattern22(4);
    return 0;
}