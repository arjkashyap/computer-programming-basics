// Calculate the number of digits in a number using log(n)

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int countDigit(int n){
    return floor(log10(n) + 1);
}

int main(){
    int n;
    printf("Enter a number to calculate digits.\n");
    scanf("%d", &n);
    printf("No. of digits: %d\n", countDigit(n));
}