// Optimized approach for trapping rain water problem
// time complexity - O(n)
// space complexity - O(1)

#include<bits/stdc++.h>
using namespace std;

int trappingWater(int arr[], int n){
    int lo = 0, hi = n - 1, rMax = 0, lMax = 0;
    int total = 0;
    while(lo <= hi){
        if( arr[lo] < arr[hi] ){
            if(arr[lo] > lMax)
                lMax = arr[lo];
            else
                total += lMax - arr[lo];
            lo++;
        }
        else{
            if( arr[hi] > rMax )
                rMax = arr[hi];
            else
                total += rMax - arr[hi];
            hi--;
        }
    }
    return total;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        cout << trappingWater(arr, n) << endl;
    }
    return 0;
}
