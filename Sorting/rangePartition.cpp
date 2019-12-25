// Following is an implementation of three way partition algorithms
// Given an array A[] and a range [a, b]. The task is to partition the array around the range such that array is divided in three parts.
//1) All elements smaller than a come first.
//2) All elements in range a to b come next.
//3) All elements greater than b appear in the end.

#include<bits/stdc++.h>
#include<vector>
using namespace std;

void Display( int *a, int n )
{
    for( int i = 0; i < n; i++ ) printf("%d ", a[i]);
    printf("\n");
}

void Arrange( int *a, int n, int l, int r)
{
   int low = 0, mid = 0, high = n-1;
   while( mid <= high ){
        if( a[mid] < l ){
            swap( a[mid], a[low] );
            low++; mid++;
        }
        else if( a[mid] > r ){
            swap( a[mid], a[high] );
             high--;
        }
        else
            mid++;
   }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n, left, right;
        scanf("%d", &n);
        int a[n];
        for( int i = 0; i < n; i++ ) scanf("%d", &a[i]);
        scanf("%d %d", &left, &right);
        Arrange( a, n, left, right );
        Display( a, n );
    }

    return 0;
}
