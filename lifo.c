#include<stdio.h>

int main(){
    char stack[100];

    char s[] = "meme";

    int size = strlen(s), c=0, d=0;

    char ps[100];

    for(int i=0;i<size;i++){
        stack[i]=s[i];
    }

    for(int i=0;i<size;i++){
        ps[i]=stack[size-i-1];
    }

    for(int i=0;i<size;i++){
        if(s[i]==ps[i]){
            c++;
        }else{
            c--;
        }
    }

    if(c==size) printf("P");
    else printf("Not P");
}
