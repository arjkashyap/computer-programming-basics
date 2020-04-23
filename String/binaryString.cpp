// For a binnary string count the number of substrings that start and end with 1

#include <bits/stdc++.h>

int binarySubstring(int n, std::string s)
{
    int res = 0;
    int setBits = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == '1')
            setBits++;
    res = (setBits * (setBits - 1)) / 2;
    return res;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::string s;
        std::cin >> n;
        std::cin >> s;
        std::cout << binarySubstring(n, s) << "\n";
    }

    return 0;
}