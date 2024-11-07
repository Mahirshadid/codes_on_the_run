#include<stdio.h>

int main(){
    int a[] = {1,4,7,9,11};
    int size = sizeof(a)/sizeof(a[0]);
    int t,c;
    scanf("%d",&t);

    for(int i=0;i<size;i++){
        if(a[i]==t){
            c=i;
            break;
        }else{
            c=0;
        }
    }

    if(c){
        printf("%d found at index %d", t, c);
    }else{
        printf("Nothing Found!");
    }
}
