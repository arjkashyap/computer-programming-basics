// Given two arrays A1[] and A2[] of size N and M respectively. 
// The task is to sort A1 in such a way that the relative order
//  among the elements will be same as those in A2

#include<bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while(t--){
        std::unordered_map<int, int> mp;
        int n1 = 0, n2 = 0, index = 0;
        std::cin >> n1 >> n2;
        int a[n1], b[n2], res[n1] = {0};
        for( int i = 0; i < n1; i++ ){
            int n;
            std::cin >> n;
            a[i] = n;
            mp[n]++;
        }
        for( int i = 0; i < n2; i++ ){
            int k;
            std::cin >> k;
            while(mp[k] != 0){
                res[index] = k;
                mp[k]--;
                index++;
            }
        }
        int st = index, end = n1;
        for(auto x : mp){
            while(x.second != 0){
                res[index] = x.first;
                x.second--;
                index++;
            }
        }
        std::sort(res + st, res + end);
        for(int i = 0; i < n1; i++)
            std::cout << res[i] << " ";
        std::cout << "\n";
    }
    return 0;
}
