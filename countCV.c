#include<stdio.h>

int main(){
    int v[] = {'a','e','i','o','u'};

    char s[] = "cow";

    int len = strlen(s), vowels=0;

    for(int i=0;i<5;i++){
        for(int j=0;j<len;j++){
            if(s[j]==v[i]){
                vowels++;
            }
        }
    }

    printf("V: %d\nC: %d",vowels,(len-vowels));
}
