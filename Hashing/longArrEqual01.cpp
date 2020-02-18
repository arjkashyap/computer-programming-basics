// Find the length of longest subarray with eqaul number of 0 and 1 in a bin array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        unordered_map<int, int> map;
        int n;
        cin >> n;
        int preSum = 0, maxLen = 0;
        for(int i = 0; i < n; i++){
            int input;
            cin >> input;
            if(input == 0)
                input = -1;
            preSum += input;
            if( preSum == 0 )
                maxLen = max(maxLen, i + 1);
            if( map.find(preSum) != map.end() )
                maxLen = max(maxLen, i - map[preSum]);
            if( map.find(preSum) == map.end() )
                map[preSum] = i;
        }
        cout << maxLen << "\n";
    }
    return 0;
}
