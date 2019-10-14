// Find the subarray with the sum equal to given integer
// using two pointer approach
#include<bits/stdc++.h>
using namespace std;

void subarraySum(int arr[], int n, int s){
   int sum = arr[0];
   int l_index = 0, r_index = 1;
  
   while(r_index <= n && l_index < n){
       
       if( sum == s ){
            cout << l_index + 1 << " " << r_index << endl;
            return;
       }

       else if ( sum > s ){
        sum -= arr[l_index];
        l_index++;
       }

       else{
        sum += arr[r_index];
        r_index++;
       }
       // cout << r_index << endl;        
   }
   cout << -1 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        
        subarraySum(arr, n, s);
    }

    return 0;
}
