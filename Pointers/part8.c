//  More on malloc, calloc and realloc

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of elements in array.\n");
    scanf("%d", &n);

    // dynamically initialized array a
    int* a = (int*)(malloc(n*sizeof(int)));   
    for(int i = 0; i < n; i++)
        a[i] = i+1;             // a[i] = *(a+i)
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    int* b = realloc(a, 2*n*sizeof(int));
    for(int i = 0; i < 2*n; i++)
        printf("%d " , b[i]);
    printf("\n");
    free(b);
    free(a);
    return 0;
}
