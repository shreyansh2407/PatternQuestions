#include<iostream>
using namespace std;
void fancyPattern(int n){
     int count=1;
    for(int i=0;i<n;i++){
       
        for(int j=0;j<=i;j++){
            if(j<i){
                cout<<count++<<"*";
            }
            else{
                cout<<count++;
            }
            
        }
        cout<<endl;
    }   
    for(int i=0;i<n;i++){
        count = 2*n -(2*i) -1;
        int start = -1;
        for(int j=0;j<n-i;j++){
             start = -1;
            if(j<n-i-1){
                cout<<count++<<"*";
            }
            else{
                cout<<count++;
            }
            start++;
        }
        cout<<endl;
        count = count - start;
    }

   
}
int main(){
    fancyPattern(4);
    return 0;
}

