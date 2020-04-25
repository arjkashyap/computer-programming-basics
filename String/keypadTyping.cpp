// Keypad typing question
// Self appraoch

#include <bits/stdc++.h>

int main()
{
    // Creating a hash map
    std::unordered_map<char, std::string> kp;
    kp['a'] = "2";
    kp['b'] = "2";
    kp['c'] = "2";
    kp['d'] = "3";
    kp['e'] = "3";
    kp['f'] = "3";
    kp['g'] = "4";
    kp['h'] = "4";
    kp['i'] = "4";
    kp['k'] = "5";
    kp['k'] = "5";
    kp['l'] = "5";
    kp['m'] = "6";
    kp['n'] = "6";
    kp['o'] = "6";
    kp['p'] = "7";
    kp['q'] = "7";
    kp['r'] = "7";
    kp['s'] = "7";
    kp['t'] = "8";
    kp['u'] = "8";
    kp['v'] = "8";
    kp['w'] = "9";
    kp['x'] = "9";
    kp['y'] = "9";
    kp['z'] = "9";

    int t;
    std::cin >> t;
    while (t--)
    {
        std::string s;
        std::cin >> s;
        std::string res = "";
        int n = s.length();
        for (int i = 0; i < n; i++)
            res += kp[s[i]];
        std::cout << res << "\n";
    }
    return 0;
}