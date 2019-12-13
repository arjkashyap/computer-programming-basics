// We have to sort a binary array in linear time and in one single traversal
// This can be done via two pointer approach

#include<bits/stdc++.h>
using namespace std;

void Display(int *a, int n){
    for( int i = 0; i < n; i++ )
        printf("%d ", a[i]);
    printf("\n");
}

void binSort( int *a, int n ){
    int s = 0, h = n -1;
    while(s < h){
        printf("%d \n", s);
        while(a[s] == 0 && s < h) s++;
        while(a[h] == 1 && s < h) h--;
        if( a[s] > a[h] ) swap(a[s], a[h]);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for( int i = 0; i < n; i++ ) scanf("%d", &arr[i]);
    binSort(arr, n);
    Display(arr, n); 
    return 0;
}
