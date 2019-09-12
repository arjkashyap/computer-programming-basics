// Solving the problem of tower of hanoi
#include<stdio.h>

void toh(int n, int from, int to, int aux){
    if( n == 1 ){
        printf("Move disc 1 from rod %d, to %d\n", from, to);
        return;
    }
    toh(n-1, from, aux, to);
    printf("Move disc %d from %d to %d \n", n, from, to);
    toh(n-1, aux, to, from);

}
  
int main(){
    int t;
    scanf("%d", &t);
    while( t-- ){
        int n;
        scanf("%d", &n);
        toh(n, 1, 3, 2);
        
    }
    printf("\n");
    return 0;
}
