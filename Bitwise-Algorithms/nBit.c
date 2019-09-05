// Program to check if the nth bit of a number is set
#include<stdio.h>
#include<stdlib.h>

int checkBit(int n, int k){
    return ( n &  (1 << ( k - 1)));
}

int main(){
    int n, k;
    printf("Enter the number and the nth bit to be checked.\n");
    scanf("%d %d", &n, &k);
    if( checkBit(n, k) )
        printf("True");
    else
        printf("False");
    return 0;
}
