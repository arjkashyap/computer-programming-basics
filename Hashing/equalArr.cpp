// Check if the two given arrays are equal or not

#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        unordered_set<int> set;
        int n;
        bool equal = true;
        cin >> n;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            set.insert(a);
        }
        for(int i = 0; i < n; i++){
            int s;
            cin >> s;
            if(set.find(s) == set.end()){
                equal = false;
                break;
            }
        }
        if(equal)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
