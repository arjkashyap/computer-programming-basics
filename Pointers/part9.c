// Functions returning a pointer
// A simple program to demonstrate functions returning pointers.

#include<stdio.h>
#include<stdlib.h>

int* Add(int*, int*);

int main(){
    int a, b;
    printf("Enter the two numbers to be added.\n");
    scanf("%d %d", &a, &b);
    
    printf("Sum of %d and %d is %d \n", a, b, *(Add(&a, &b)));
    return 0;
}

int* Add(int* x, int* y){
    int* sum = (int*)(malloc(sizeof(int)));
    *sum = *x + * y;
    return sum;
}
