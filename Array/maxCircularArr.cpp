// Maximum circular subarray sum
// Using kadane algorithm

#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){
    int global_max = arr[0];
    int local_max = arr[0];

    for(int i = 1; i < n; i++){
        local_max = max(local_max + arr[i], arr[i]);
        if( local_max >= global_max )
            global_max = local_max;
    }
    return global_max;
}

int maxSubSum(int arr[], int n){
    int max_kadane = kadane(arr, n);
    int max_wrap = 0;
    for(int i = 0; i < n; i++){
        max_wrap += arr[i];
        arr[i] = -arr[i];
    }
    max_wrap += kadane(arr, n);
    return ( max_wrap > max_kadane ) ? max_wrap : max_kadane;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        cout << maxSubSum(arr, n) << endl;
    }
    return 0;
}
