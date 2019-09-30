// In a sorted binary array, count the occurence of 1
// Note: the array is sorted in a reverse order

#include<bits/stdc++.h>
using namespace std;

int countOnes(int arr[], int n)
{
    int l = 0, h = n - 1, lIndex = 0;

    while(l <= h){
        int mid = (l + h) / 2;
        if(arr[mid] == 1 && ( mid == n - 1 || arr[mid+1] != 1  )){
            lIndex = mid;
            break;
        }
        if( arr[mid] < 1 )
            h = mid - 1;
        else
            l = mid + 1;
    }
    return lIndex + 1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << countOnes(arr, n) << endl;
    return 0;
}
