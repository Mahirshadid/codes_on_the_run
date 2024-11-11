#include<stdio.h>

int sumOfdig(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n=n/10;
    }

    return sum;
}

int main(){
    int n = 12345;

    int sum = sumOfdig(n);

    printf("%d", sum);
}
