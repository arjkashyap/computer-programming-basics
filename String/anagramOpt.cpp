// Optimized approach for anagram

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        string s1, s2;
        cin >> s1 >> s2;
        bool anagram = true;
        if(s1.length() == s2.length()){
            n = s1.length();
            int a[256] = {0};
            for(int i = 0; i < n; i++)
                a[s1[i]]++;
            for(int i = 0; i < n; i++)
                a[s2[i]]--;
            for(int i = 0; i < 256; i++)
                if(a[i] > 0)
                    anagram = false;
        }
        else
            anagram = false;
        if(anagram)
            cout << "Yes";
        else
            cout << "No";
        cout << "\n";
    }
    return 0;
}
