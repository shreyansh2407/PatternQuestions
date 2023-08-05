#include<iostream>
using namespace std;
//function definition 
void printPattern11(int n){
    int start=0;
        for(int i=0;i<n;i++){
            if(i%2==0) start=1;
            else start=0;
            for(int j=0;j<=i;j++){
                cout<<start;
                start=1-start;
            }
            cout<<endl;
            // shre
        }
}
//calling the pattern function 
int main(){
    int n=4;
    printPattern11(n);
    return 0;
}
