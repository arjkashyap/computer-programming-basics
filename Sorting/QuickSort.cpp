// Quick sort algo
// Using Hoarse algorithm for partition

#include<bits/stdc++.h>
using namespace std;

void Display(int *a, int n){
    for( int i = 0; i < n; i++ )
        printf("%d ", a[i]);
    printf("\n");
}

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partitionIndex(int *a, int start, int end){
    int pivot = a[end];                 // Pivot element
    int partitionIndex = start;            
    for(int i = start; i < end; i++){
        if( a[i] <= pivot ){
            swap(&a[i], &a[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(&a[partitionIndex], &a[end]);
    return partitionIndex;
}

void QuickSort(int *a, int start, int end){
    if( start < end ){
        int pIndex = partitionIndex(a, start, end);
        QuickSort(a, start, pIndex-1);
        QuickSort(a, pIndex + 1, end);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for( int i = 0; i < n; i++ )
        scanf("%d", &arr[i]);
   QuickSort(arr, 0, n -1); 
   Display(arr, n);
   return 0;
}
