#include<stdio.h>

int main(){
    char c[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    char s1[] = "silent"; char s2[] = "listen";

    int s1l = strlen(s1);
    int s2l = strlen(s2);
    int sum1 = 0, sum2 = 0;

    if(s1l!=s2l){
        printf("NO anagram!");
        return 0;
    }else{
        for(int i=0;i<s1l;i++){
        for(int j=0;j<26;j++){
            if(s1[i]==c[j]){
                sum1+=j;
            }
            if(s2[i]==c[j]){
                sum2+=j;
            }
        }
        }
    }

    if(sum1==sum2) printf("YES anagram!");
    else printf("NO anagram!");

}
