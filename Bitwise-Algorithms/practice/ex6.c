// Calculating the longest consecutive 1's

#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int max = 0;
        int i = 0;
        while(i <= 10){
            int num = n;
            int count = 0;
            while( num & (1 << i)  ){
                count ++;
                i++;
            }
            if( count > max )
                max = count;
            i++;
        }
        printf("%d\n", max);
    }

    return 0;
}
