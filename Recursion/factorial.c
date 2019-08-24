// Implementing recursion to calculate factorial of a scanned no.

#include<stdio.h>

int factorial(int n){
    if( n == 1 )
        return 1;
    else
        return n * factorial(n-1);
}

int main(){
    int n;
    printf("Enter a number to calculate factorial \n");
    scanf("%d", &n);
    printf("%d\n", factorial(n));
    
    return 0;
}
