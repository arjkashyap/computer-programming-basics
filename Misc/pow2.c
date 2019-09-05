// Check if the given number is a power of 2 without using loop

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number to be checked. \n");
    scanf("%d", &n);
    if( !( n & (n - 1) ) && n != 0)
        printf("YES");
    else 
        printf("NOPE");
    printf("\n");
    return 0;
    
}
