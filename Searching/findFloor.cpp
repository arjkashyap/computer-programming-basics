#include<bits/stdc++.h>
#include<vector>
using namespace std;

int findFloor(vector<long long> v, long long n, long long x){
    long l = 0, h = n-1;
    long long index = -1;
    while(l <= h){
        long long mid = (l+h)/2;
        if ( v[mid] == x )
            return mid;
         
        else if( v[mid] < x ){
            l = mid + 1;
            index = mid;
        }
        
        else
            h = mid - 1;
    }
        
    return index;
}


int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n, x;
        cin >> n >> x;
        vector<long long> v;
        for( long long i = 0; i < n; i++ ){
            long long tmp;
            cin >> tmp;
            v.push_back(tmp);
        }

        cout << findFloor(v, n, x) << endl;

    
    }    
    
    return 0;
}
