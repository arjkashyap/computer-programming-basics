// Merge sort in cpp

#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

void Display( int *arr, int n ){
    for( int i = 0; i < n; i++ ) printf("%d ", arr[i]);
    printf("\n");
}

void Merge(int *L, int *R, int nL, int nR, int *A){
    int i =0, j = 0, k = 0;
    while(  i < nL && j < nR ){
        if( L[i] < R[i] )
            A[k++] = L[i++];
        
        else
            A[k++] = R[j++];
    }
    while( i < nL ) A[k++] = L[i++];
    while( j < nR ) A[k++] = R[j++];

}

void MergeSort(int* a, int n){
    if( n < 2 ) return;
    
    int mid = n / 2;
    int *L = ( int* )malloc( (mid) * sizeof( int ) );
    int *R = ( int* )malloc( (n - mid) * sizeof( int ) );
    for( int i = 0; i < mid; i++ ) L[i] = a[i];
    for( int i = mid; i < n; i++ ) R[i - mid] = a[i];
    MergeSort(L, mid);
    MergeSort(R, n - mid);
    Merge(L, R, mid, n - mid, a);
    free(L);
    free(R);
}

int main(){
    int n;
    printf("Enter the number of elements in the array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for( int i = 0; i < n; i++ ) scanf("%d", &arr[i]);
    MergeSort(arr, n);
    for( int i = 0; i < n; i++ ) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
