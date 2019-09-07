#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);
        if( n & (1 << k) )
            printf("YES");
        else
            printf("NO");
    }
    
    return 0;
}
