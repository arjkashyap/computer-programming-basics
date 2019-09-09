// Factorial programm using tail recursion
#include<iostream>
using namespace std;

int fact(int n, int val = 1){
    if(n == 0)
        return val;
    return fact(n - 1, val * n);
    
}

int main(){
    
    int n = 5;
    printf("%d\n", fact(n));
    return 0;
}