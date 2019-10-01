// Given an array which is sorted and rotated
// Find the element in O(logn) time

#include<bits/stdc++.h>
using namespace std;

int searchElement(int arr[], int n, int x){
    int l = 0, h = n-1;
    
    while(l <= h){
        int mid = (l + h) / 2;
        if(arr[mid] == x)
            return mid;
        if( arr[mid] <= h ){
            if( x <= arr[h] && x > arr[mid])
                l = mid + 1;
            else
                h = mid - 1;
        }
        else
            if( x >= arr[l] && x < arr[mid] )
                h = mid - 1;
            else
                l = mid + 1;
    }
    return -1;
   
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        cin >> x;
        cout << searchElement(arr, n, x) << endl;
    }

    return 0;
}
