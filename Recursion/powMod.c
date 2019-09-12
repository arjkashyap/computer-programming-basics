// For a given number, raise the power of the number to the reverse and print in div with modulo i;e 10 ^ 9 + 7

#include<stdio.h>
const unsigned int M = 1000000007;

int rev(int n){
    int res = 0;
    while(n > 0){
        res = res*10 + n%10;
        n = n/10;
    }
    return res;
}

long long powRaise(int n, int power){
    if( power == 0 )
        return 1;
    
    return (n*powRaise(n, power - 1))%M;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int p = rev(n);
        printf("%d\n", p);
        printf("%lld\n", powRaise(n, p));
    }
    
    return 0;
}
