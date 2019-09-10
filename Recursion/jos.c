// Solving josephus problem using recursion

#include<stdio.h>
#include<stdlib.h>

int jos(int n, int k){
    if(n == 1)
        return n;
    return ((jos(n-1, k) + k -1 )%n + 1);
}

int main(){
    int n, k;
    printf("Enter the number of people sitting and the itterative index\n");
    scanf("%d %d", &n, &k);
    printf("%d\n", jos(n, k));
    return 0;
}
