// To rotate a given array by d

#include<stdio.h>

void swap(int* n1, int* n2){
    int tmp = *n1;
    *n1 = *n2;
     *n2 = tmp;
}

void helper(int a[], int low, int high){
    while(low < high){
        swap(&a[low], &a[high]);
        low++;
        high--;
    }
}
void rotate(int a[], int n, int d){
    helper(a, 0, n - d - 1);
    helper(a, n - d, n - 1);
    helper(a, 0, n-1); 
}

int main(){
    int n, d;
    printf("Number of integers: ");
    scanf("%d", &n);
    printf("\nElements: ");
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter d: ");
    scanf("%d", &d);
    rotate(a, n, d);
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
