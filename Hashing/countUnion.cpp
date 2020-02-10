// Count the number of elements in the union of the two arrays using cpp

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
        int n, n1, n2;
        cin >> n1 >> n2;
        n = n1 + n2;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            set.insert(a);
        }
        cout << set.size() << "\n";
    }
    return 0;
}
