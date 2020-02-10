// Counting the number of intersections in an array usning hashing
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
        int n1, n2;
        cin >> n1 >> n2;
        for( int i = 0; i < n1; i++ ){
            int a;
            cin >> a;
            set.insert(a);
        }
        int count = 0;
        for( int i = 0; i < n2; i++ ){
            int s;
            cin >> s;
            if(set.find(s) != set.end()){
                count++;
                set.erase(s);
            }
        }
        cout << count << "\n";
    }
    return 0;
}
