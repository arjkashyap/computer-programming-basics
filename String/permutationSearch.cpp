#include<bits/stdc++.h>

bool areSame(int* a, int* b )
{
    for(int i = 0; i < sizeof(a); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while(t--){
        std::string s, p;
        std::cin >> s >> p;
        int s_arr[256] = {0}, p_arr[256] = {0};
        for(int i = 0; i < p.length(); i++){
            s_arr[p[i]]++;
            p_arr[p[i]]++;
        }
        bool found = false;
        for(int i = p.length(); i < s.length(); i++){
            if( areSame(s_arr, p_arr) ){
                found = true;
                break;
            }
            s_arr[s[i]]++;
            s_arr[s[i - p.length()]]--;
        }
        if(found)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}
