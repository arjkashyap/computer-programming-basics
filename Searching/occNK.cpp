// For a given array. Find the elements in the array that appear more than n/k times.

#include<bits/stdc++.h>
using namespace std;

void freqSort(int arr[], int n)
{
    int i = 0;
    while( i < n ){
        if( arr[i] <= 0 ){
            i++;
            continue;
        }

        int elementIndex = arr[i] - 1;
        if( arr[elementIndex] > 0 ){
            arr[i] = arr[elementIndex];
            arr[elementIndex] = -1;
        }
        else{
            arr[elementIndex]--;
            arr[i] = 0;
            i++;
        }
    }
}

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
        for( int i = 0; i < n; i++ ) scanf("%d", &arr[i]);
        scanf("%d", &k);
        printf("%d\n", countOccurence(arr, n, k));

    }

    return 0;
}
