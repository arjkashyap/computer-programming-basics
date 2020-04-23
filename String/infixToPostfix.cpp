#include<bits/stdc++.h>

int checkPrec(char c)
{
    if( c == ')')
        return 3;
    else if( c == '^' )
        return 2;
    else if( c == '/' || c == '*' )
        return 1;
    else if( c == '+' || c == '-' )
        return 0;
    else
        return -1;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cout << "Enter t \n";
    std::cin >> t;
    while(t--){
        std::stack<char> s;
        int n;
        std::cout<<"Enter n \n";
        std::cin >> n;
        std::string str, res;
        std::cin >> str;
        for(int i = 0; i < n; i++){
            if( str[i] >= 'A' && str[i] <= 'Z'){
                res += str[i];
            }
            else if( str[i] == '(' || s.size() == 0){
                s.push(str[i]);
            }
            else if( str[i] == ')' ){
                while( s.size() != 0 || s.top() != '(' ){
                        res += s.top();
                        s.pop();
                    }
                if(s.top() == '(')
                    s.pop();
            }
            else if( checkPrec(str[i]) > checkPrec(s.top()) ){
                s.push(str[i]);
            }
            else{
                while( checkPrec(s.top()) > checkPrec(str[i]) || checkPrec(s.top()) == checkPrec(str[i]) || s.size() != 0){
                    res += s.top();
                    s.pop();
                }
            }
        }
        std::cout << res << "\n";
    }
    return 0;
}
