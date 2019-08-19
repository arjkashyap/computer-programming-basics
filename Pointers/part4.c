// using pointers in functions in c
// Simple program to increment a variable by an external function
#include<stdio.h>

void Increment(int *ptr){
    *ptr = *ptr + 1;
}

int main(){
    int a = 21;
    printf("Value of a is : %d\n", a);
    Increment(&a);      // Passing the address 
    printf("Value of a is : %d\n", a);

    return 0;
}
