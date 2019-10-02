// An optimized approach for finding the sqare root or the 
// floor number to the root
// Using binary search

#include<bits/stdc++.h>
using namespace std;

int sqRoot(int n){
    int l = 0, h = n;
    if( n == 0 || n == 1 )
        return n;
    int ans = 1;
    while(l < h){
        int mid = (l + h) / 2;
        if( mid*mid == n )
            return mid;
        if( mid*mid < n ){
            l = mid + 1;
            ans = mid;
        }
        else
            h = mid - 1;
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << sqRoot(n) << endl;
    }
    
    return 0;
}
