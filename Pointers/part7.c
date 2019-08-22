// A simple program to demonstrate pointers and dynamic memory
#include<stdio.h>
#include<stdlib.h>

int main(){

    /* Declare a pointer ptr. 
       ptr will be stored in the stack memory
     */

    int *ptr;
   /*
    Malloc is used to allocate memory in the heap segment.
    mallco function returns a void pointer to base address
    and takes the  amount of space required as an argument.  
   */
   
    ptr = ( int* )malloc(sizeof(int));
    *ptr = 21;        // 21 stored in heap segment

    free(ptr);        // Clears the memory allocated in the heap 

    // Storing array in heap

    int *a;
    int n = 10;         // array size
    a = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
        *(a+i) = i+1;
    for(int i = 0; i < 10; i++)
        printf("%d ", *(a+i));
    
    free(a);
    return 0;
}
