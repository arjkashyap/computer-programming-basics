// Return the position of the right most different bit

#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n1, n2;
        scanf("%d %d", &n1, &n2);
        int index = 0; 
        int xor = n1 ^ n2;
        while( !( xor  &  (1 << index)))
            index ++;
        
        printf("%d\n", index+1);
    }
    return 0;
}
