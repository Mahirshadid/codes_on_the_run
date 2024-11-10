#include<stdio.h>

int MaxSubArray(int a[], int s){
    int max_so_far = a[0], current_max = a[0];

    for(int i=1;i<s;i++){
        if(a[i]>current_max+a[i]){
            current_max=a[i];
        }else{
            current_max=current_max+a[i];
        }

        if(max_so_far<current_max){
            max_so_far = current_max;

    }

    return max_so_far;
}

}

int main(){
    int a[] = {1,-3,5,7,-5,9,3};
    int s = 7;

    int msa = MaxSubArray(a, s);

    printf("%d",msa);
}
