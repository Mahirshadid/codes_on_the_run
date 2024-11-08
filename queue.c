#include<stdio.h>
int queue[5], i=0;
void enqueue(int n){
    queue[i] = n;
    i++;
}

void dequeue(){
    for (int j = 0; j < i - 1; j++) {
        queue[j] = queue[j + 1];
    }
    i--;
}

int main(){

    enqueue(10);
    enqueue(20);
    enqueue(30);

    for(int j=0;j<i;j++){
        printf("%d ",queue[j]);
    }

    dequeue();
    dequeue();
    printf("\n");

    for(int j=0;j<i;j++){
        printf("%d ",queue[j]);
    }
}
