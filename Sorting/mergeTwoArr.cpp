// We have merge two sorted arrays such that the resulting array has the elements of both the arrays in 
// a sorted manner

#include<bits/stdc++.h>
using namespace std;

void Display( int *a, int n ){
    for( int i = 0; i < n; i++ )
        printf("%d ", a[i]);
    printf("\n");
}

void Merge(int *a1, int *a2, int *a3, int n1, int n2){
    int i = 0, k = 0, j = 0;
    while(i < n1 && j < n2){
        if( a1[i] < a2[j] ) a3[k++] = a1[i++];
        else a3[k++] = a2[j++];
    }

    while( i < n1 ) a3[k++] = a1[i++];
    while( j < n2 ) a3[k++] = a2[j++];
}

int main(){
    int t;
    scanf("%d", &t);
    while( t-- ){
        int n1, n2;
        scanf("%d", &n1);
        int a1[n1];
        for( int i = 0; i < n1; i++ ) scanf("%d", &a1[i]);
        scanf("%d", &n2);
        int a2[n2]; 
        for( int i = 0; i < n2; i++ ) scanf("%d", &a2[i]);
        int n3 = n1 + n2;
        int a3[n3];
        Merge(a1, a2, a3, n1, n2);
        Display(a3, n3);
    }
    
    return 0;
}
