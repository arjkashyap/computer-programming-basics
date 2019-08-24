// Implementing Fibonacci series with optimized time complexicity
// Here we have stored the return values in arrays

#include<stdio.h>
#include<time.h>
#define MAX_SIZE 50

int a[MAX_SIZE];

int fib(int n){
    if( n <= 1 )
        return n;
    if ( a[n] != -1 )
        return a[n];

    a[n] =  fib(n-1) + fib(n-2);    
}

int main(){
    clock_t t;
    t = clock();
    
    int n = 48;
   
    for(int i = 0; i < MAX_SIZE; i++){ a[i] = -1; }
    printf("%d\n", fib(n));
    
    t = clock() -t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time taken: %f\n", time_taken);
    return 0;
}
