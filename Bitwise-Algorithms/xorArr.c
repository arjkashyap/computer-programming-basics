// In an array, all elements are occuring even number of times except one
// Find that element

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[] = {3, 3, 3, 4, 4, 5, 5, 5, 5};
    int xor = 0;
    for(int i = 0; i < sizeof(a)/sizeof(int); i++){
        xor ^= a[i];
    }
    printf("%d\n", xor);
    return 0;
}
