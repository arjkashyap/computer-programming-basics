// Grouping similar elements together 
// Using two pointer approach
// Optimized Algorithm

#include<bits/stdc++.h>
using namespace std;

void Display( int *a, int n )
{
    for( int i = 0; i < n; i++ )
        printf("%d ", a[i]);
    printf("\n");
}

void arrange( int *a, int n )
{
    int i = -1, j = n;
    while(true){
        do{ i++; }while( a[i] < 0 );
        do{ j--; }while( a[j] >= 0 );

        if( i >= j )
            return;

        swap(a[i], a[j]);
    }
 }

int main()
{
    int t;
    scanf("%d", &t);
    while( t-- ){
        int n;
        scanf("%d", &n);
        int arr[n];
        for( int i = 0; i < n; i++ )
            scanf("%d", &arr[i]);

        arrange( arr, n );
        Display( arr, n );
    }

    return 0;
}
