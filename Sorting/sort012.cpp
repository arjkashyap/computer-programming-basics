//Given an array A of size N containing 0s, 1s, and 2s. The task is to segregate the 0s , 1s and 2s in the array as 
//all the 0s should appear in the first part of the array, 1s should appear in middle part of the array and finally 
//all the 2s in the remaining part of the array.

#include<bits/stdc++.h>
using namespace std;

void segragate012(int A[], int N)
{
    int low = 0, mid = 0, high = N - 1;
    while( mid <= high ){
        switch( A[mid] ){
            case( 0 ):
                swap( A[mid], A[low] );
                mid++; low++;
                break;
            case( 1 ):
                mid++;
                break;
            case( 2 ):
                swap( A[mid], A[high] );
                high--;
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
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        segragate012(a, n);
        for( int i = 0; i < n; i++ ) 
            printf("%d ", a[i]);
        printf("\n");
    }

    return 0;
}
