#include<bits/stdc++.h>
using namespace std;

int minDiff( int *a, int n, int m ){
    int min = a[n-1] - a[0];
    for( int i = 0; i < n-m; i++ ){
        if( a[i+(m-1)] - a[i] < min)
            min = a[i+(m-1)] - a[i];
    }
    return min;
}

int main(){
    int t;
    scanf("%d", &t);
    while( t-- ){
        int n, m;
        scanf("%d", &n);
        int a[n];
        for( int i = 0; i < n; i++ ) scanf("%d", &a[i]);
        scanf("%d", &m);
        sort(a, a + n);
        printf("%d\n", minDiff(a, n, m));
    }
}
