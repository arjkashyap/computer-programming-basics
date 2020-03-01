#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long a[n];
        for(long long i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        long long sum = 0;
        for(long long i = 0; i < k; i++) sum += a[i];
        cout << sum << endl;
    }

	return 0;
}
