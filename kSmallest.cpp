// Find the kth smallest element in an array

#include<bits/stdc++.h>
using namespace std;

int kSmallest(int arr[], int n, int k){
    sort(arr, arr + n);
    int i = 0, track = 1;
    while(i < n){
        if(track == k)
            return arr[i];
        
        if( arr[i] != arr[i+1] ){
            track++;
        }
        i++;
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n;
        int arr[n];
        for( int i = 0; i < n; i++ ) cin >> arr[i];
        cin >> k;
        cout << kSmallest(arr, n, k) << endl;
    }
    
    return 0;
}
