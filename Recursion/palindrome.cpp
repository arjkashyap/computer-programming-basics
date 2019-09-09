// To check if a string is palindrome or not using recursion

#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string s, int start, int end){
    if ( start == end )
        return true;
    if ( start > end ) return true;
    if( s[start] != s[end] )
        return false;
    return checkPalindrome(s, start + 1, end - 1);
}

int main(){
    
    string s;
    cin >> s;
    int n = s.length();
    if ( checkPalindrome(s, 0, n-1) )
        cout<<"YEP"<<endl;
    else
        cout<<"Nope"<<endl;

    return 0;
}