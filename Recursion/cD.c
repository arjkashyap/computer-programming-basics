// Count the total number of digits in 
#include<stdio.h>

int countDigit(int n){
    if ( n == 0)
        return 0;
    return 1 + countDigit(n/10);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t --){
        int n;
        scanf("%d", &n);
        printf("%d\n", countDigit(n));
    }
    
    return 0;
}