#include<stdio.h>

int gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main(){

    int a=56, b=98;

    int _gcd = gcd(a,b);
    int _lcm = (a*b)/_gcd;

    printf("GCD: %d \nLCM: %d", _gcd, _lcm);

}
