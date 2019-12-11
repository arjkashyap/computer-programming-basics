// Given an array we have to find the inversion count of the array
// Using Merge sort

#include<bits/stdc++.h>
using namespace std;

long int total = 0;

void Display(int *a, int n){
    for( int i = 0; i < n; i++ )
        printf("%d ", a[i]);
    printf("\n");
}

void merge(int* A, int* B, int* C, int nA, int nB){
    int i = 0, j = 0, k = 0;
    while( i <  nA && j < nB){
        if( A[i] < B[j] || A[i] == B[j]) C[k++] = A[i++];

        else{
            C[k++] = B[j++];
            total += nA - i;
        }
        
    }
    while( i < nA ) C[k++] = A[i++];
    while(j < nB) C[k++] = B[j++];
}

void countInversion(int *a, int n){
    if ( n < 2 ) return;
    int mid = n / 2;

    int L[mid], R[n - mid];
    for( int i = 0; i < mid; i++ ) L[i] = a[i];
    for( int i = mid; i < n; i++ ) R[i - mid] = a[i];

    countInversion(L, mid);
    countInversion(R, n - mid);
    merge(L, R, a, mid, n - mid);
}

int main(){
    int t;
    scanf("%d", &t);
    while( t-- ){
        int n;
        scanf("%d", &n);
        int arr[n];
        for( int i = 0; i < n; i++ ) scanf("%d", &arr[i]);
        countInversion(arr, n);
        printf("%li\n", total);
        total = 0;
    }

    return 0;
}
