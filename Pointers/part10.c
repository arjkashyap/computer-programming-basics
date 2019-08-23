// Pointer to function
// A basic program to demonstrate pointers to functions.

#include<stdio.h>

int Add(int, int);
void printHello();

int main()
{
    int a = 7, b = 10;
    
    // Declare a function pointer
    int (*p)(int, int);
    p = &Add;            // Now the ptr stores addres of the func.
    printf("Sum of %d and %d is %d\n", a, b, (*p)(a, b));
    
    // Alternate
    void (*ptr)() = printHello;
    ptr("Arjun");
    return 0;
}

int Add(int a, int b)
{
    return a+b;
}

void printHello(char *name){
    printf("Hello %s\n", name);
}
