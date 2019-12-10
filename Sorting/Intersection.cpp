// To find the intersectino of two arrays in linear time
// Which means to print the elements which are common in both the arrays.

#include<bits/stdc++.h>
using namespace std;

void Intersect(int *a1, int *a2, int n1, int n2){
    int i = 0, j = 0;
    while( i < n1 && j < n2 ){
        if( a1[i] == a2[j] ){
            printf("%d ", a1[i]);
            i++;
            j++;
        }
        else if( a1[i] < a2[j] )
            i++;
        else if ( a1[i] > a2[j] )
            j++;
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n1, n2;
        scanf("%d", &n1);
        int a1[n1];
        for( int i = 0; i < n1; i++ ) scanf("%d", &a1[i]);
        scanf("%d", &n2);
        int a2[n2];
        for( int i = 0; i < n2; i++ ) scanf("%d", &a2[i]);
        Intersect(a1, a2, n1, n2);

    }

    return 0;
}
