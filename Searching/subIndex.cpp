// Find the subarray with the sum equal to given integer
// using two pointer approach

#include<bits/stdc++.h>
using namespace std;

void subarraySum(int arr[], int n, int s){
   int sum = 0;
   int l = 0, h = n-1;
   for(int i = 0; i < n; i++)
       sum += arr[i];
   while(l <= h){
      cout << sum << endl;
      if ( sum == s ){
          cout << l+1 << " " << h+1 << endl;
          return;
      }
      else if( sum < s ){
        sum -= arr[l];
        l++;
      }
      else{
          sum -= arr[h];
          h--;
      }
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
