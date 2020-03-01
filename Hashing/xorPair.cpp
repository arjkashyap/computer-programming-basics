#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    cout << "t: " << t<< endl;
    while(t--){
        unordered_set<int> s;
        int n, k;
        cin >> n >> k;
        cout <<"n: " << n << " k: "<< k;
        bool pairFound = false;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            if(s.find(k ^ a) != s.end()){
                pairFound = true;
                break;
            }
            else
                s.insert(a);
        }
        cout << "pair found " << pairFound << endl;
        if(pairFound)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    return 0;
}
