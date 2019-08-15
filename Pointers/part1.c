// Introduction to pointers
// Pointer is a variable that stores the address of other variables

#include<stdio.h>
int main(){
    int a;      // Declaring an int allocates 4 bytes in memory
    int *ptr;   // Declaration of a pointer
    a = 7; 
    ptr = &a;   // Pointer stores the address of var a;
    printf("a = %d\n", a);    // 7
    printf("deref ptr gives %d \n", *ptr);  // derefrencing ptr
    return 0;
}
