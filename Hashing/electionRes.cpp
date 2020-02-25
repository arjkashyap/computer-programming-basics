//Given an array of names (consisting of lowercase characters) of 
//candidates in an election. A candidate name in array represents a vote casted to the candidate

#include<bits/stdc++.h>
using namespace std;

void winner(string arr[],int n)
{
    unordered_map<string, int> map;
    for(int i = 0; i < n; i++)
        map[arr[i]]++;
    string winner;
    int maxVotes = 0;
    for(auto x : map){
        cout << x.first << x.second << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        unordered_map<string, int> map;
        int n;
        cin >> n;
        string a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        winner(a, n);
    }

    return 0;
}
