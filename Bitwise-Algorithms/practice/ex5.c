// Check if the number is sparse or not

#include<stdio.h>
#include<stdlib.h>

int checkSparse(int n){
    if ( n & (n << 1)) 
        return 0;
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t --){
    int n;
    scanf("%d", &n);
    if( checkSparse(n) )
        printf("YES\n");
    else
        printf("NOPE\n");
    }

    return 0;
}
