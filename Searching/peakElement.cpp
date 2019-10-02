// To find the peak elements in an array within O(logn) time

#include<bits/stdc++.h>
using namespace std;

int peakElements(int arr[], int n){
    int l = 0, h = n - 1;
    while(l < h){
        int mid = (l + h)/ 2;
        if( mid == 0 && arr[mid] >= arr[mid+1] || ( mid == n-1 && arr[mid-1] <= arr[mid]) || ( mid != 0 && mid != n-1 && arr[mid] >= arr[mid-1] && arr[mid] >= arr[mid+1]) )
            return mid;
        if( mid > 0 && arr[mid] < arr[mid - 1] )
            h = mid - 1;
        else
            l = mid + 1;
    }
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for( int i = 0; i < n; i++ ) cin >> arr[i];
        cout << peakElements(arr, n) << endl;;
        
    }

    return 0;
}
