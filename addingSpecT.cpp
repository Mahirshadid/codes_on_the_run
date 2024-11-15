#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {2,7,11,15};
    int t = 9;

    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if((a[j]+a[i])==t){
                cout<<i<<", "<<j;
                break;
            }
        }
    }
}
