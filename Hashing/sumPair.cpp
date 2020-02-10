// Find a pair in unsorted array whose sum equals to given number

#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        unordered_set<int> set;
        int n;
        cin >> n;
        bool found = false;
        int a[n] = {0};
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int sum;
        cin >> sum;
        for(int i = 0; i < n; i++){
            if(set.find(sum - a[i]) != set.end())
                found = true;
            set.insert(a[i]);
        }
        if(found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
