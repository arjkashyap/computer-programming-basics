// Pattern searching for a given string when all the
//chars in the pattern string are different

#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while (t--)
    {
        std::string str, pat;
        std::cin >> str >> pat;
        int m = pat.length(), n = str.length();
        for (int i = 0; i < n;)
        {
            int j = 0;
            while (j < m)
            {
                if (str[i + j] != pat[j])
                    break;
                j++;
            }
            if (j == m - 1)
            {
                std::cout << j << "\n";
                break;
            }
            else if (j == 0)
                i++;
            else
                i += j; // This condition generates bug if the input pattern has repeating chars
        }
    }
    return 0;
}