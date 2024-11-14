#include<bits/stdc++.h>
using namespace std;


int main(){
    int n = 3;
    int a[3] = {1,4,7};
    int b[3] = {2,3,5};
    int c[6];

    int i=0,j=0,k=0;

    while(i<n && j<n){
        if(a[i]<=b[j]){
            c[k++]=a[i++];
        }else{
            c[k++]=b[j++];
        }
    }

    while(i<n){c[k++]=a[i++];}

    while(j<n){c[k++]=b[j++];}

    for(int m=0;m<2*n;m++){
        cout<<c[m]<<" ";
    }
}
