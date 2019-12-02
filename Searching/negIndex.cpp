// Count the frequency of each element in the array using negative index method
#include<bits/stdc++.h>
using namespace std;

void freqCount(int arr[], int n){
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
            i ++ ;
        }
    
    }

    for( int i = 0; i < n; i ++ ) printf("%d ", abs(arr[i]));
    printf("\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while( t-- ){
        int n;
        scanf("%d", &n);
        int arr[n];
        for( int i = 0; i < n; i++ ) scanf("%d", &arr[i]);
        freqCount(arr, n);

    }

    return 0;
}
