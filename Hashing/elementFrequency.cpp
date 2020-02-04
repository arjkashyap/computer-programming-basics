// To count the frequency of each element using hashing
// This is done via unordered_map

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        unordered_map<int, int> um;
        for(int i = 0; i < n; i++){
           int input;
           cin >> input;
           um[input]++;
        }
        for(auto x : um)
            cout << x.first << " " << x.second << "\n";
        cout << "\n";
    }

    return 0;
}
