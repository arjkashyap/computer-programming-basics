// Using Kadane's algrorithm to find the maximum sum of 
// a contagious sub array

#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n){
    int localMax = arr[0], globalMax = arr[0];
    for( int i = 1; i < n; i++ ){
        localMax = max(arr[i], localMax + arr[i]);
        if( localMax >= globalMax )
            globalMax = localMax;
    }
    return globalMax;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for( int i = 0; i < n; i++ ) cin >> arr[i];
        cout << maxSubarraySum(arr, n) << endl;

    }

    return 0;
}
