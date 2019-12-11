// Lomuto partition for partitioning the array arround a pivot element.

#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void Display(int *a, int n){
    for( int i = 0; i < n; i++ )
        printf("%d ", a[i]);
    printf("\n");
}

// Returns the index of the pivot element
int lomutoPart(int *a, int l, int h){
    int pivot = a[h];
    int i = l - 1;
    for( int j = l; j <= h; j++ ){
        if( a[j] < pivot ){
            i++;
            swap( &a[j], &a[i] );
        }
    }
    swap(&a[i+1], &a[h]);
    return i+1;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for( int i = 0; i < n; i++ ) scanf("%d", &arr[i]);
    printf("Pivot index: %d\n", lomutoPart(arr, 0, n-1));
    for( int i = 0; i < n; i++ ) printf("%d ", arr[i]);
    printf("\n");
    return 0;   
}
