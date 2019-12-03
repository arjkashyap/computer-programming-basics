// We have to find the permuation in which we allocate the permutatin with minimum max number of pages
// of the books to a student

#include<bits/stdc++.h>
using namespace std;

int maxPages(int arr[], int n, int s){
    sort(arr, arr + n);
}

int main(){
    int t;
    scanf("%d", &t);
    while( t-- ){
        int n, s;           // n = no of books, s = no of students
        scanf("%d", &n);
        int arr[n] = {0};
        for( int i = 0; i < n; i++ ) scanf("%d", &arr[i]);
        scanf("%d", &s);
        printf("%d", maxPages(arr, n, s));
    }

    return 0;
}
