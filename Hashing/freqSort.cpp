#include<bits/stdc++.h>
using namespace std;

void sortByFreq(int arr[], int n)
{
    unordered_map<int, int> freqMap;
    unordered_map<int, vector<int>> helperMap;
    vector<int> freq;
    for(int i = 0; i < n; i++)
        freqMap[arr[i]]++;
    for(auto x : freqMap)
        freq.push_back(x.second);
    sort(freq.begin(), freq.end(), greater<int>());
    for(auto i = freq.begin(); i < freq.end(); i++){
        if(freq[i] == freq[i+1])
            freq.erase(i);
    }
    for(auto x = freq.begin(); x != freq.end(); x++){
        for(auto y : freqMap){
            if(*x == y.second)
                helperMap[*x].push_back(y.first);
        }
    }
   // for(auto x : helperMap){
   //     cout << x.first << " --> {";
   //     sort(x.second.begin(), x.second.end());
   //     for(auto y = x.second.begin(); y < x.second.end(); y++)
   //         cout << *y << " ";
   //     cout << "}" << endl;
   // }
   // cout << "\n";
    for(auto x = freq.begin(); x < freq.end(); x++){
        int f = *x;
        if(*x != *(x+1)){
            vector<int> v = helperMap[*x];
            for(int i = 0; i < v.size(); i++)
                if(v[i] != v[i+1])
                    cout << v[i] << " ";
        }
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
