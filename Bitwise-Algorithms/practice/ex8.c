// Find the pair with maximum value and

#include<stdio.h>
#include<stdlib.h>


int checkBit(int pattern, int a[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if( (pattern & a[i]) == pattern )
            count ++;
    }
    return count;
}

int findMaxAnd(int a[], int n){
    int count = 0;
    int res = 0;
    for(int bit = 31; bit >= 0; bit--){
        count = checkBit( res | (1 << bit), a, n);
        
        if( count >= 2 )
            res |= 1  << bit;
  
    }
    return res;
}

int main(){
    int a[] = {4, 8, 12, 16};
    int n = 4;
    printf("%d\n", findMaxAnd(a, n));
    return 0;
}
