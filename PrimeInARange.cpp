#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10, b=20;

    for(int i=a;i<=b;i++){
        int prime=1;
        for(int j=2;j*j<=b;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime){
            cout<<i<<" ";
        }
    }
}
