// We have to count the number of inversions in an array


#include<bits/stdc++.h>
using namespace std;

int findPivotIndex(int *a, int n){
    int index = 0;
    int pivot = a[n];
    while( index < n ){
        if( a[pivotIndex] > )
    
    }
}

void countInversions(int *a, int start, int end){
    
    while( start < end ){
        int pivotIndex = findPivotIndex(a, n);
        countInversions(a, start, pivotIndex);
        countInversions(a, pivotIndex + 1, n);
    }
    
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for( int i = 0; i < n; i++ ) scanf("%d", &arr[i]);
        countInversions(arr, n);
    }

    return 0;
}
