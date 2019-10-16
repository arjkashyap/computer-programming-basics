// Find the missing number using XOR

#include<bits/stdc++.h>
using namespace std;

int missing(int arr[], int n){
    int x1, x2;
    x1 = arr[0];
    for(int i = 1; i < n; i++) x1 ^= arr[i];
    x2 = 1;
    for(int i = 2; i <= n+1; i++) x2 ^= i;
    return x1 ^ x2;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];

        cout << missing(arr, n) << endl;
    }

    return 0;
}
