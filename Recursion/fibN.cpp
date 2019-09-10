// Printing the nth value of fib series

#include<iostream>
using namespace std;

int fib(int n, int a = 1, int b = 1){
    if (n <= 2)
        return b;
    //printf("%d\n", b);
    return fib(n - 1, b, a + b);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d\n", fib(n));
    }
    
    return 0;
}
