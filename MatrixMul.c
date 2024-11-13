#include<stdio.h>

int main(){
    int a[2][2] = {
      {2, 2},
      {3, 3}
    };

    int b[2][2] = {
      {4, 4},
      {5, 5}
    };

    int c[2][2] = {0};

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
                printf("%d ",c[i][j]);
        } printf("\n");
    }
}
}
