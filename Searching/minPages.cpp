// We have to find the permuation in which we allocate the permutatin with minimum max number of pages
// of the books to a student

#include<bits/stdc++.h>
using namespace std;

int arrSum(int *arr, int n){
    int sum = 0;
    for( int i = 0; i < n; i++ ) sum += arr[i];
    return sum;
}

int findMinStudents(int arr[], int n, int k){
    int sum = 0, count = 1;
    for( int i = 0 ; i < n; i++ ){
        sum += arr[i];
        if( sum >  k){
            sum = arr[i];
            count++;
        }
    }

}

int maxPages(int arr[], int n, int s){
    sort(arr, arr + n);
    int h = arr[n-1];
    int l = arrSum(arr, n);
    while( l < h ){
        int mid = ( l + h ) / 2;

        int minStudents = findMinStudents(arr, n, mid);
    }
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
