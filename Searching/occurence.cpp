// We have to find the occurence of an element in an array
// The array is sorted and time complexity is O(logn)

#include<bits/stdc++.h>
using namespace std;

int leftIndex(int arr[], int l, int h, int s){
    
    if( l > h )
        return -1;
    
    int mid = (l + h) / 2;
    if(arr[mid] == s && (mid == 0 || arr[mid-1] != s))
        return mid;
    if( arr[mid] >= s )
        return leftIndex(arr, l, mid - 1, s);
    else
        return leftIndex(arr, mid + 1, h, s);
}

int rightIndex(int arr[], int l, int h, int s, int n){
   
    if(l > h)
        return -1;
    int mid = (l + h) / 2; 
    if(arr[mid] == s && ( mid == n-1 || arr[mid+1] != s ))
        return mid;
    if( arr[mid] > s )
        return rightIndex(arr, l, mid - 1, s, n);
    else
        return rightIndex(arr, mid+ + 1, h, s, n);
        
}

int countOcc(int arr[], int l, int h, int s, int n){
    return rightIndex(arr, l, h, s, n) - leftIndex(arr, l, h, s) + 1;    
}

int main(){
    int n, s;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    cin >> s;
    cout << countOcc(arr, 0, n-1, s, n) << endl;
    return 0;
}
