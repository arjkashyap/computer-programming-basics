// Calculate the number of digits in a number using recursion

#include<stdio.h>
#include<stdlib.h>

int countDigit(int n){
    if( n == 0 )
        return 0;
    return 1 + countDigit(n/10);
}

int main(){
    int n;
    printf("Enter a number to count digits. \n");
    scanf("%d", &n);
    printf("Number of digits: %d\n", countDigit(n));
    return 0;
}