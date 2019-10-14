// Find the pair of elements in an array with sum equal to given umber x
// Using the two pointer approcach

#include<bits/stdc++.h>
using namespace std;

void findPair(int arr[], int n, int x){
    int start = 0, end = n - 1;
    while(start < end){
        int sum = arr[start] + arr[end];
        if(sum == x){
            cout << arr[start] << " " << arr[end] << endl;
            return;
        }
        if( sum < x )
            start++;
        else
            end --;
    }
    cout << "Not Found" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n;
        int arr[n];

        for( int i = 0; i < n; i++ ) cin >> arr[i];
        sort(arr, arr + n);
        cin >> x;
        findPair(arr, n, x);
    }

    return 0;
}
