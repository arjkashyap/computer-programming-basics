// Implementation of painter partition problem using binary search
//here are k painters available and each takes 1 unit time to paint 1 unit of board. 
//The problem is to find the minimum time to get this job done under the constraints 
//that any painter will only paint continuous sections of boards

#include<bits/stdc++.h>
using namespace std;

int maxArr(int *a, int n){
    int max = 0;
    for( int i = 0; i < n; i++ ){
        if( arr[i] > max )
            max = arr[i];
    }
    return max;
}

int sumArr(int *a, int n){
    int sum = 0;
    for( int i = 0; i < n; i++ )
        sum += arr[i];
    return sum;
}

int maxTime(int *a, int n, int k){
    int l = maxArr(a, n);
    int h = sumArr(a, n);
    

}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d", &n);
        int arr[n];
        for( int i = 0; i < n; i++) scanf("%d", &arr[i]);
        scanf("%d", &k);
        printf("%d\n", maxTime(arr, n, k));
    }

    return 0;
}
