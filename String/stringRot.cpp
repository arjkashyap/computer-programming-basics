// Program to check if the given two strings are rotation of one another

#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while (t--)
    {
        std::string str_1, str_2;
        std::cin >> str_1 >> str_2;
        str_1 += str_1;
        std::cout << str_1.find(str_2) << "\n";
        if (str_1.find(str_2) != std::string::npos)
            std::cout << "Given string is rotation of one another";
        else
            std::cout << "String are not rotation of one another";

        std::cout << "\n";
    }

    return 0;
}
