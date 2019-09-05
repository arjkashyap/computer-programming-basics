// We will count the number of set bits using the longer approach i;e left shift

#include<stdio.h>
#include<stdlib.h>

int setBits(int n){
    if ( !(n & (n - 1)) && n != 0)      // If the number is power of 2
        return 1;

    int count = 0, i = 0; 
    while( i <= 8 ){
        if (n & (1<<i))
            count++;
        i++;
    }

    return count;
}

int main(){
    int n;
    printf("Enter the digit to count set bits. \n");
    scanf("%d", &n);
    printf("Number of set bits: %d\n", setBits(n));
    return 0;
}
