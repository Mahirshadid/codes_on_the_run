#include<stdio.h>
#include <stdlib.h>

void ssort(int a[], int size){
    for (int i = 0; i < size - 1; i++) {
        int minindex = i;
        for (int j = i+1; j < size; j++) {
        if(a[j] < a[minindex]){
            minindex = j;
        }
        }
    int c = a[minindex];
    a[minindex] = a[i];
    a[i] = c;
    }
}

int comp(const void *a, const void *b){
    return (*(int *)a-*(int *)b);
}

int binary_search(int a[], int size, int t){
    int left = 0, right = size-1;

    while(left<=right){
        int mid = left + (right-left)/2;

        if(a[mid]==t){
            return mid;
        }

        if(a[mid]<t){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }

    return -1;
}

int main(){
    int a[] = {1,14,7,9, 43, 11};
    int size = sizeof(a)/sizeof(a[0]);
    int t = 11;

    qsort(a, size, sizeof(int), comp);

    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    int res = binary_search(a, size, t);
    printf("index found at %d.",res);

}
