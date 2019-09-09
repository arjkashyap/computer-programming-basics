// Find the sum of all digits of a number using recursion.
#include<stdio.h>

int digitSum(int n){
    if ( n < 10 )
        return  n;
    return n % 10 + digitSum(n/10);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("Sum: %d\n", digitSum(n));
        
    }
    printf("\n");
    return 0;
}