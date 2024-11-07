#include<stdio.h>

int main(){
    int n;

    scanf("%d",&n);

    int ones = __builtin_popcount(n);

    if(ones%2==0){
        printf("Evil!\n");
    }else{
        printf("Odious!\n");
    }
}
