// Find the the element that occurs the maximum number of times
// Using BST
// An element occuring more than N/2 times has max freq

#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int size){
    sort(arr, arr + size);
    int l = 0, h = size-1;
    int mid = (l + size)/2;
    if( arr[mid] == arr[mid + 1] )
        return arr[mid];
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        cout << majorityElement(arr, n) << endl;
        
    }
    return 0;
}
