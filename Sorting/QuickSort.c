#include<stdio.h>
#include<stdlib.h>

void QuickSort(int[], int, int);
int Partition(int[], int, int);
void Swap(int*, int*);

int main(){
    int n;
    printf("Enter the number of elements in the array. \n");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    QuickSort(a, 0, n-1);
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void QuickSort(int a[], int start, int end){
    if(start < end)
        return;
    int pIndex = Partition(a, start, end);
    QuickSort(a, start, pIndex -1);
    QuickSort(a, pIndex +1, end);
}

int Partition(int a[], int start, int end){
    int pivot = a[end], pIndex = start;
    for(int i = start; i < end; i++){
        if(a[i] < pivot){
            Swap(&a[i], &a[pIndex]);
            pIndex++;
        }
    }
    Swap(&a[pIndex], &pivot);
    return pIndex;
}

void Swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
