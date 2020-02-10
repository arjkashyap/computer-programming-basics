// Find if there exists a subarray with zero sum
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

bool isSum(int *a, int n)
{
    int preSum = 0;
    unordered_set<int> set;
    for(int i = 0; i < n; i++){
        preSum += a[i];
        if(set.find(preSum) != set.end())
            return true;
        if(preSum == 0)
            return true;
        set.insert(preSum);
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        if(isSum(a, n))
            cout << "YES\n";
        else
            cout << "No\n";
    }
    return 0;
}
