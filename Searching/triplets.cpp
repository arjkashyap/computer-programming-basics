// To find three elements in the array which make the sum equal to x
// Using two pointer approach

#include<bits/stdc++.h>
using namespace std;

void twoPointerCheck( int arr[], int n, int index, int x ){
    int l = index + 1, h = n-1;
    while(l < h){
        int sum = arr[index] + arr[l] + arr[h];
        if( sum == x){
            cout << arr[index] << " " << arr[l] << " " << arr[h] << endl;
            return;
        }
        else if ( sum  < x )
            l++;
        else
            h--;
    }
}

void findTriplet(int arr[], int n, int x){
    for( int i = 0; i < n; i++ )
        twoPointerCheck(arr, n, i, x);
    
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
        findTriplet(arr, n, x);
    }

}
