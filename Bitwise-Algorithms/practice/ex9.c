#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        unsigned int ev = n & 0xAAAAAAAA;
        unsigned int od = n & 0x55555555;
        
        ev >>= 1;
        od <<= 1;
        printf("%d\n", ev | od);
    }
    return 0;
}