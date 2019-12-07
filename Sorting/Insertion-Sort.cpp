// Insertion Sort in CPP

#include<bits/stdc++.h>
using namespace std;

void Display(int *a, int n){
    printf("Array: ");
    for( int i = 0; i < n; i++ ) printf("%d ", a[i]);
    printf("\n");
}

void InsertionSort(int *a, int n){
    for( int i = 1; i < n; i++ ){
        int index = i;
        int value = a[index];
        while( index > 0 && a[index-1] > value){
            a[index] = a[index-1];
            index--;
        }
        a[index] = value;
    }
}

int main(){
    int n;
    printf("Enter the number of elements in the array.\n");
    scanf("%d", &n);
    int a[n] = {0};
    printf("Enter the elements of the array. \n");
    for( int i = 0; i < n; i++ ) scanf("%d", &a[i]);
    Display(a, n);
    InsertionSort(a, n);
    Display(a, n);
    
    return 0;
}
