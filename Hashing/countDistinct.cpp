// Count the number of distinct elements in an array using hasing
// This problem is done in O(n) time complexity using unordered_set
#include<bits/stdc++.h>
#include<unordered_set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;

    while(t--){
        unordered_set<int> us;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int input;
            cin >> input;
            us.insert(input);
        }
        cout << us.size() << "\n";
    }

    return 0;
}
