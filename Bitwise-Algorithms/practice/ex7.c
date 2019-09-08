// Conversion of binary to gray code

#include<stdio.h>
#include<stdlib.h>

int convert(int n){
    return (n ^ ( n >> 1 ));
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("Gray code: %d\n", convert(n));
    }
    
    return 0;
}
