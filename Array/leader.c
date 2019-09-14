// Find the leader elements in a given arrya using O(n) complexity

#include<stdio.h>

void printLeaders(int a[], int n){
    int i = n - 1;
    int max = 0;
    while(i >= 0){
        if ( a[i] >= max ){
            printf("%d ", a[i]);
            max = a[i];
        
        }
        i--;
    }

}

int main(){
    int n = 7;
    int a[] = {5, 3, 20, 15, 4, 13, 1};

    printLeaders(a, n);
    return 0;
}
