#include<bits/stdc++.h>
using namespace std;

bool comparePair(pair<int, int>& a, pair<int, int>& b)
{
    if(a.second == b.second) return a.first < b.first;

    return a.second > b.second;
}

void sortByFreq(int arr[], int n)
{
    unordered_map<int, int> freqMap;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++)
        freqMap[arr[i]]++;
    copy(freqMap.begin(), freqMap.end(), back_inserter(v));

    sort(v.begin(), v.end(), comparePair);

    for(int x = 0; x < v.size(); x++){
        for(int y = 0; y < v[x].second; y++)
            cout << v[x].first << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sortByFreq(a, n);
    }
    return 0;
}
