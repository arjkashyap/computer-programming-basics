// Count the number of set bits from 0 to n

#include<stdio.h>
#include<stdlib.h>

int countSetBits(int n){
    n++;
    int res = 0;
    while(n --){
        int tmp = 0;
        int num = n;
        while(num != 0){
            tmp++;
            num = num & (num-1);
        }
        res += tmp;
    }
    return res;
}

int main(){
    printf("%d\n", countSetBits(4));
    printf("%d\n", countSetBits(17));

    return 0;

}
