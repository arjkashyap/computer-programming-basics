// Construct LPPS (Longest Proper Prefix Suffix) array of a given string

#include <bits/stdc++.h>

void constructLPPS(std::string pat, int *lpps)
{
    int len = 0;

    // Initiate index at 1 as lpps for index 0 -> 0
    int i = 1;
    int m = pat.length();
    while (i < m)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lpps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lpps[len - 1];
            }
            else
            {
                lpps[i] = 0;
                i++;
            }
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while (t--)
    {
        std::string pat;
        std::cin >> pat;
        int n = pat.length();
        int lpps[n] = {0};
        constructLPPS(pat, lpps);
        for (int i = 0; i < n; i++)
            std::cout << lpps[i] << " ";
        std::cout << "\n";
    }

    return 0;
}