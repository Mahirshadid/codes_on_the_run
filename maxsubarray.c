#include<stdio.h>

int main(){
    int a[]= {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size= sizeof(a)/sizeof(a[0]);

    int max_so_far = a[0];
    int current_max = a[0];

    for(int i=1;i<size;i++){
        if(a[i]>current_max+a[i]){
            current_max = a[i];
        }else{
            current_max = current_max+a[i];
        }
    }

    if(current_max>max_so_far){
        max_so_far = current_max;
    }

    printf("Max sum: %d", max_so_far);
}
