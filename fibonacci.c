#include<stdio.h>

int main(){
    int n=10;

    int f1 = 0, f2 = 1;

    for(int i=1;i<=n;i++){
        printf("%d ",f1);
        int temp = f1 + f2;
        f1 = f2;
        f2 = temp;
    }
}
