#include<stdio.h>
#include<stdlib.h>

int comp(int *a, int *b){
    return (*(int *)a - *(int *)b);
}

int main(){
    int a[] = {3, 5, 7, 2, 8};

    int size = sizeof(a)/sizeof(a[0]);

    qsort(a, size, sizeof(int), comp);

    printf("Largest: %d\n", a[size-1]);
    printf("Sec. Largest: %d", a[size-2]);
}
