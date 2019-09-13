#include<stdio.h>

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void reverse(int a[], int n){
    int low = 0, high = n-1;
    while(low < high){
        swap(&a[low], &a[high]);
        low++;
        high--;
    }
}

int main(){
    int n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    reverse(a, n);
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
