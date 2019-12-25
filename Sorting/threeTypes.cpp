// Given an array with three types of elements.
// Arrange the array such that the similar elements occure together
// This Algorithm is also called 3 way partitioning of Dutch National flag algorithm

#include<bits/stdc++.h>
using namespace std;

void Display(int *a, int n)
{
    for( int i = 0; i < n; i++ )
        printf("%d ", a[i]);
    printf("\n");
}

void arrange( int *a, int n )
{

    int lo = 0, mid = 0, hi = n-1;
    while( mid <= hi ){
        printf("%d\n", a[mid]);
        switch( a[mid] ){
            case 0:
                swap(a[mid], a[lo]);
                lo++; mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap( a[mid], a[hi] );
                hi--;
                break;
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while( t-- ){
        int n;
        scanf("%d", &n);
        int a[n];
        for( int i = 0; i < n; i++ )
            scanf("%d", &a[i]);
        arrange(a, n);
        Display(a, n);
    }

    return 0;
}
