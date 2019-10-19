// Find the minimum element in the rotated array
// Using binary search
#include<bits/stdc++.h>
using namespace std;

int minNumber(int arr[], int low, int high){
    int min = arr[low];
    int lst = arr[high];
    while(low <= high){
        int mid = (low + high) / 2;
        if( arr[mid] < arr[mid-1] && arr[mid] < arr[mid+1] )
            return arr[mid];
        else if ( arr[mid] < lst )
            high = mid - 1;
        else
           low = mid + 1;
        
    }
    return -1;
   
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for( int i = 0; i < n; i++ ) cin >> arr[i];
        cout << minNumber(arr, 0, n-1) << endl;
    }

    return 0;
}
