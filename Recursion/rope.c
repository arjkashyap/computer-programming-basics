// Rope cutting problem using recursion
// If you are given a rope of length n, how many cuts do you need to make such that the cuts are of length a or b or c 

#include<stdio.h>

int maxNum(int a, int b, int c){
    if( a >= b && a >= c )
        return a;
    else if ( b > a && b >= c )
        return b;
    else
        return c;
}

int maxCuts(int n, int a, int b, int c){
    int max;
    if ( n == 0 )
        return n;
    if ( n < 0 )
        return -1;

    max = maxNum(
            maxCuts(n -a, a, b, c),
            maxCuts(n-b, a, b, c),
            maxCuts(n-c, a, b, c)
            );
    if( max == -1 )
        return max;
    return max + 1;
}

int main(){
    int t;
    printf("Number of test cases\n");
    scanf("%d", &t);
    while(t--){
        int n, a, b, c;
        printf("Enter the value of n, a, b, and c\n");
        scanf("%d %d %d %d", &n, &a, &b, &c);
        printf("No. of cuts: %d\n", maxCuts(n, a, b, c));
    }

    return 0;
}
