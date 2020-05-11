#include<bits/stdc++.h>

int main()
 {
    int t;
    std::cin >> t;
    while(t--){
        std::string str;
        std::cin >> str;
        int len = str.length();
        int ascSum = 0;
        for(int i = 0; i < len; i++)
            ascSum += (int)str[i];
        int res = floor(ascSum / len);
        std::cout << res << "\n";
    }

	return 0;
}
