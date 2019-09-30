// Implementing Binary Search using Recursion

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int h, int search){
    
   if( l > h )
       return -1;

    int mid = low + ((h-l) / 2);
    if( arr[mid] == search )
        return mid;
    if( arr[mid] > search )
        return binarySearch(arr, l, mid-1, search);
    else
        return binarySearch(arr, mid+1, h, search);
}

int main(){
    int n, s;
    cout << "Enter the number of elements in array.\n";
    cin >> n;
    int arr[n];
    cout << " Enter the elements in a sorted manner " << endl;
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    cout << "Enter the elements to be searched " << endl;
    cin >> s;
    
    cout << binarySearch(arr, 0, n-1, s) << endl;
    return 0;

}
