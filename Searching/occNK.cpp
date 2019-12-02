// For a given array. Find the elements in the array that appear more than n/k times.

#include<bits/stdc++.h>
using namespace std;

void freqSort()

int countOccurence(int arr[], int n, int k)
{
    int num = n/k, occ = 0;
    freqSort(arr, n);
    for( int i = 0; i < n; i++ ){
        if( abs(arr[i]) > num )
            occ ++;
    }
    return occ;
}

int main(){
    int t;
    scanf("%d", &t);
    while( t-- ){
        int n, k;
        scanf("%d", &n);
        int arr[n];
        for( int i = 0; i < n; i++ ) scanf("%d", &n);
        scanf("%d", &k);
        printf("%d\n", countOccurence(arr, n, k));

    }

    return 0;
}
