// Find max j - i such that a[i] < = a[j]
// O(n^2) solution

#include<iostream>
using namespace std;

int maxIndex(int arr[], int n){
    int maxDiff = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if( (j - i > maxDiff) &&  arr[i] <= arr[j])
                maxDiff = j - i;
        }
    }
    return maxDiff;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        for( int i = 0; i < n; i++ ) cin >> arr[i];
        cout << maxIndex(arr, n);
        cout << endl;
    }

    return 0;
}
