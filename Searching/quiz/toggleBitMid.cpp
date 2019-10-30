// Toggle the middle most bit of a number in it binary representation

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, res = 0;
        cin >> n;
        int r = floor( log2(n) ) + 1;    // zero based index
        if ( n == 0 )
            res = 1;
        else if( ( r  ) % 2 == 0 ){
            int mid = ( r) / 2;
            res = ( n ^ ( 1 << mid) );
            res = ( res ^ ( 1 << (mid - 1)) );
           
        }
        else{
            int mid = (r / 2);
            res = ( n ^ (1 << mid) );
        }
        cout << res << endl;
    }
    
    return 0;
}
