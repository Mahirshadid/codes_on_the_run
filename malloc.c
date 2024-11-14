#include<stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;

    int *a = (int *)malloc(n * sizeof(int));

    if(a==NULL){
        printf("Malloc Failed\n");
        return 1;
    }

    for(int i=0;i<n;i++){
        a[i] = i+1;
    }

    for(int i=0;i<n;i++){
        printf("%d ",(void*)&a[i]);
    }

    free(a);
}
