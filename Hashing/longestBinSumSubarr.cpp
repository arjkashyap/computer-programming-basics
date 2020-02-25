// Given two binnary arrays. Find the longest common subarrays with equal sum

#include<bits/stdc++.h>
using namespace std;

int countCommon(int a[], int b[], int n)
{
    unordered_map<int, int> mp;
    int maxSize = 0, pre_sum = 0;
    int aux[n];
    for(int i = 0; i < n; i++){
        aux[i] = a[i] - b[i];
        pre_sum += aux[i];
        if( pre_sum == 0 && i > maxSize)
            maxSize = i + 1;
        else if( mp.find(pre_sum) != mp.end() )
            maxSize = max(maxSize, (i - mp[pre_sum]));
        else
            mp[pre_sum] = i;
    }
    return maxSize;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        cout << countCommon(a, b, n) << "\n";
    }
    return 0;
}
