#include<iostream>
using namespace std;
void printPattern10(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars = 2*n-i;
        // if(i>n)  stars = 2*n-i-1;
        for(int j=1;j<=stars;j++){
            cout<<"* ";
        }
        cout<<endl;
        //Pattern questions
    }
}
int main(){
    printPattern10(5);
    return 0;
}
