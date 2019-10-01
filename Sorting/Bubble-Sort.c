// Implementing bubble sort algorithem

#include<stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int  j = 0; j < n - i - 1; j++){
            if(a[j+1] < a[j])
                swap(&a[j+1], &a[j]);
        }
    }
}

int main(){
    int n;
    printf("Enter the number of elements.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array.\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    bubbleSort(arr, n);
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
