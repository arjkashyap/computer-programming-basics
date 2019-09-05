// Return the position of first set bit in a number

#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n;
        scanf("%d", &n);
        int index = 0;
        if(n == 0)
            printf("0\n");
        else{
            while( !(n & (1 << (index)) ))
                index++;
            printf("%d\n", index+1);
        }
    }
    return 0;
}
