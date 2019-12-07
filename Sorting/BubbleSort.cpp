// Bubble sort in CPP
#include<bits/stdc++.h>
using namespace std;

void Display( int *a, int n ){
    printf("Array: ");
    for( int i = 0; i < n; i ++ ) printf("%d ", a[i]);
    printf("\n");
}

void BubbleSort( int *a, int n ){
    for( int k = 0; k < n - 1; k++ ){
        for( int i = 0; i < n - k - 1; k++ )
    }
}

int main(){
    int n = 0;
    printf("Enter the number of elements in the array. \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements. \n");
    for( int i = 0; i < n; i++ ) scanf("%d", &arr[i]);

    Display(arr, n);
    BubbleSort(arr, n);
    Display(arr, n);

    return 0;

}
