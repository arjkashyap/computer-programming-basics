// Power of number using c

#include<stdio.h>

int recPow(int n, int p){
    if( p == 0)
        return 1;
    else if ( p == 1 )
        return n;
    return n*recPow(n, p - 1);

}

int main(){
    int t;
    scanf("%d", &t);
    while( t-- ){
        int n, p;
        scanf("%d %d", &n, &p);
        printf("%d\n", recPow(n, p));
    }
    
    return 0;
}
