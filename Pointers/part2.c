// Some basics operations on pointers
// Changing the value stored in var using pointer

#include<stdio.h>
int main(){
    int a;
    a = 7;
    int *ptr;       // Pointer declared
    ptr = &a;         // ptr store the location of var a
    printf("%p\n", ptr);        // Print the address 
    printf("a = %d\n", a);
    *ptr = 12;          // dereferencing prtr
    printf("a = %d\n", a);


    // Pointer arithemetics
    printf("Address in p is %p\n", ptr);
    printf("After increment %p\n", ptr+1);

    // Sizes of different data types
    printf("Size of int is %lx\n", sizeof(int));
    printf("Size of float is %lx\n", sizeof(float));
    printf("Size of double is %lx\n", sizeof(double));
    
    return 0;
}
