// Check if the two strings are anagrams of each other
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        bool anagram = true;
        if(s1.length() == s2.length()){
            unordered_map<char, int> m1, m2;
            for(int i = 0; i < s1.length(); i++){
                m1[s1[i]]++;
                m2[s2[i]]++;
            }
            for(int i = 0; i < s1.length(); i++){
                if( m1[s1[i]] != m2[s1[i]])
                    anagram = false;
            }
        }
        else
            anagram =false;
        if(anagram)
            cout << "Yes";
        else
            cout << "No";
        cout << "\n";
    }
    return 0;
}
