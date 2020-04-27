// Naive algorithem for pattern search

#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
std:
    cin >> t;
    while (t--)
    {
        std::string str, pat;
        sd::cin >> str >> pat;

        for (int i = 0; i <= str.length() - pat.length(); i++)
        {
            int j = 0;
            while( j < pat.length ){
                if(str[i+j] != pat[j])
                    break;
                j++;
            }
            if (j == pat.length())
                cout << i << "\n";
        }
    }
    return 0;
}