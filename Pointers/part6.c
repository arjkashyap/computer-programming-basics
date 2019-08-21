// Pointers and 2d arrays.
#include<stdio.h>

int main(){
    int a[5] = {12, 4, 6, 9, 0};
    int* p = a;
    printf("Address from pointer p is %p\n", p);
    printf("Address from array a is %p\n", a);
    printf("element from 2 using ptr is %d\n", *(p+2));
    printf("element at 2 index from array is %d\n", *(a+2));
        
    int b[2][3];
    // Populating the array.
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++)
            b[i][j] = j*2;
    }

    printf("Deref b returns the pointer to array at %p\n", *b);
    printf("Double deref returns value at %p i;e %d\n", *(b+1), *(*(b+1)));
    printf("Value at b[0][2] add- %p is %d\n", (*b + 2), *(*b + 2));
    if((*b+2) == &b[0][2])
        printf("True");

    return 0;
}
