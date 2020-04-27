// Find the number of times given pattern occurs in the string
// This apprach is unsuiable if the string 2 has any character different than that of string 1

#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while (t--)
    {
        std::string s1, s2;
        std::cin >> s1 >> s2;
        int startIndex = 0, endIndex = s1.length() - 1;
        int count = 0;
        while (s1.find(s2) != std::string::npos)
        {
            s1 = s1.substr(startIndex, endIndex);
            startIndex = s1.find(s2);
            startIndex++;
            count++;
        }

        std::cout << count << "\n";
    }

    return 0;
}