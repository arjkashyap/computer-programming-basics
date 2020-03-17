// Find the lex rank of the string

#include<bits/stdc++.h>
using namespace std;

void Display(int *a, int n)
{
    for(int i = 0; i < n; i ++)
        cout << a[i] << " ";
    cout << "\n";
}

int factorial(int n)
{
    return n <= 1 ? 1 : n*factorial(n-1);
}

int lexRank(string s)
{
    int res = 1;
    int n = s.length();
    int count[256] = {0};
    int mul = factorial(n);
    for(int i = 0; i < n; i++)
        count[s[i]]++;
    for(int i = 1; i < 256; i++)
        count[i] += count[i-1];
    for(int i = 0; i < n; i++){
        mul /= n-i;
        res += count[s[i-1]] * mul;
        for(int j = s[i]; j <256; j++)
            count[j]--;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << lexRank(s) << "\n";
    }
    return 0;
}
