// Find the left most occurence of an index in a sorted array

#include<bits/stdc++.h>
using namespace std;

int leftMostOcc(int arr[], int l, int h, int x){
    while( l <= h){
        int mid = (l + h)/2;
        if(arr[mid] == x && ( mid == 0 || arr[mid-1] != x ))
            return mid;
        if( arr[mid] >= x )
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main(){
    int arr[] = {2, 3, 3, 3, 3};
    int x = 3;
    int n = 5;
    cout << leftMostOcc(arr, 0, n - 1, x) << endl;
    return 0;
}
