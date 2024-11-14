#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int a[n] = {1,2,5,7,3,0};

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int t = a[j+1];
                a[j+1] = a[j];
                a[j] = t;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
