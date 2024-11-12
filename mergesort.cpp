#include<bits/stdc++.h>

int mergesort(int a, int n){
    int hn = ceil(n/2);
    int ln = n-hn;

    if(hn>=0){
        int hhn = ceil(hn/2);
    }
}

int main(){
    int n = 7;
    int a[7] = {1,5,3,7,9,2,4};

    int sorted[7] = mergesort(a, n);

    for(int i=0;i<7;i++){
        printf("%d ",sorted[i]);
    }
}
