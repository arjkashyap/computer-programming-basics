// Print numbers from 1 to n using recursion

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printNos(int n){
    if ( n == 0 )
        return;
    
    printNos( n - 1 );
    printf("%d ", n);
    
}

int main(){
    clock_t t;
    t = clock();
    
    int n = 1000;
    printNos(n);
    
    
    printf("\n");
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Execution time: %f\n", time_taken);
    return 0;
}
