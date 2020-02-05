// Count the number of intersections between two array
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        unordered_set<int> us;
        int n1, n2;
        cin >> n1;
        for(int i = 0; i < n1; i++){
            int a;
            cin >> a;
            us.insert(a);
        }
        cin >> n2;
        int a2[n2];
        for(int i = 0; i < n2; i++) cin >> a2[i];
        int res = 0;
        for(int i = 0; i < n2; i++){
            if( us.find(a2[i]) != us.end() ){
                res++;
                us.erase(a2[i]);
            }
        }
        cout << res << "\n";
    }

    return 0;
}
