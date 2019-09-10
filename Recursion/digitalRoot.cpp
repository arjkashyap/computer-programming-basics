// Calculating the digital root of a number using recursion
//
#include<iostream>
using namespace std;

int digRoot(int n){
    if( n < 10 )
        return n;
    int res = digRoot(n/10) + n % 10;
    return digRoot(res);

}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("Digital root: %d\n", digRoot(n));
    }
    
    return 0;
}
