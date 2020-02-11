// Find the longest subarray with sum equal to given number
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        unordered_map<int, int> umap;
        int n, sum = 0;
        cin >> n;
        int a[n] = {0};
        for(int i = 0; i < n; i++)
            cin >> a[i];
        cin >> sum;
        int max_len = 0, pre_sum = 0;
        for(int i = 0; i < n; i++){
            pre_sum += a[i];
            if(pre_sum == sum) max_len = i + 1;

            if(umap.find(pre_sum - sum) != umap.end())
                max_len = max(max_len, i - umap[pre_sum - sum]);

            if(umap.find(pre_sum - sum) == umap.end())
                umap.insert({pre_sum, i});
        }
        cout << max_len << "\n";
    }
    return 0;
}
