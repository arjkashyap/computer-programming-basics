// Print the left most repeating element in a string
// An optimized approach

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        int a[256] = {-1};
        int res = INT_MAX;
        for(int i = 0; i < n; i++){
            if(a[s[i]] == -1)
                a[i] = 1;
            else
                res = min(res, a[s[i]]);
        }
        if( res == -1 )
            cout << -1 << endl;
        else
            cout << res << endl;
    }
    return 0;
}
