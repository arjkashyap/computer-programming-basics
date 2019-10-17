#include<bits/stdc++.h>
using namespace std;

int leftIndex(int sizeOfArray, int arr[], int elementToSearch){
    int l = 0, h = sizeOfArray - 1, x = elementToSearch;
    while(l <= h){
        int mid = (l + h)/ 2;
        if( (arr[mid] == x && arr[mid] != arr[mid-1]) || (arr[mid] == x && mid == 0))
            return mid;

        else if( arr[mid] >= x || arr[mid-1] == x)
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
        cout << leftIndex(n, arr, x) << endl;
    }

    return 0;
}
