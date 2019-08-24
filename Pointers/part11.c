// Using pointer to functions for sorting algorithem


#include<stdio.h>
#include<stdlib.h>

int compare(int a, int b)
{
    if(a > b)
        return 1;
    else
        return 0;
}

void BubbleSort(int a[], int n, int (*compare)(int, int))
{
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n - i - 1; j ++){
            if( compare(a[j], a[j + 1])){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
                
        }
    }

}

int main()
{
    int n;
    printf("Enter the number of elements. \n");
    scanf("%d", &n);
    int* A = (int*)(malloc(n*sizeof(int)));
    for(int i = 0; i < n; i++){ scanf("%d", &A[i]); }
    
    BubbleSort(A, n, compare);
    for(int i = 0; i < n; i ++){ printf("%d ", A[i]); }
    printf("\n");
    free(A);
    return 0;
}
