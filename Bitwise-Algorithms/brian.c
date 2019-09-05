// Counting the number of set bits using Brian Karnighan Algo

#include<stdio.h>
#include<stdlib.h>

int countBits(int n){
    int count = 0;
    while(n){
        n = ( n & ( n - 1 ) );
        count++;
    }
    return count;
}

int main(){
    int n;
    printf("Enter the number to calculate the no. of set bits \n");
    scanf("%d", &n);
    printf("No of set bits: %d\n", countBits(n));
    
    return 0;
}
