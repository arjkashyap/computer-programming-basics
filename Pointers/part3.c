// Pointer to pointer operations

#include<stdio.h>
int main(){
    int a;
    a = 24;
    int *p = & a;    // p stores address to a
    int **pp = &p;    // pp stores address to pointer p
    int ***ppp = &pp;  // ppp stores address to pointer pp

    printf("a = %d\n", a);
    printf("location stored at p is : %p\n", p);
    
    *p = 29;
    printf("Value modified. \n a = %d\n", a);

    printf("location stored at pp is : %p\n", pp);
    printf("location stored at ppp is : %p\n", ppp);

    ***ppp = 12;
    printf("Value modified. \n a = %d\n", a);
    printf("Latest value of a is %d\n", ***ppp);
    return 0;
}
