// Given a string, print the left most repeating element.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        int count[256] = {0};
        for(int i = 0; i < n; i++)
            count[s[i]]++;
        for(int i = 0; i < n; i++){
            if( count[s[i]] > 1 ){
                cout << s[i] << endl;
                break;
            }
        }
        
    }
    return 0;
}
