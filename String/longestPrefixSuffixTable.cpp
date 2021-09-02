#include<iostream>
#include<string>
#include<vector>

using namespace std;



/*
    LPS TABLKE
    For a given string, make the prefix suffix array.
    The prefix suffix array tells us the longest prefix that is also a suffix uptill 
    the specific index in the array

    i/p:     'a  b  c  a  b  i  g  g  c  b  a
    o/p:     [0  0  0  1  2  0]

    i/p:     a  b  a  c  a  b  a  d
    o/p:    [0  0  1  0  1  2  3  0]
   
            i  j
    i/p:    a  b  b  a  b  b
    o/p:    0  0  0  1  2  3
	
	l                    r
	a  b  a  c  a  b  a  d
    0  0  0  0  1  2  3  0
	
	l r
	a  b  a  a  b  a
*/

void buildLPS(string str, vector<int>& lps)
{
	cout << "Building LPS table for: " << str << endl;
	int left = 0, right = 1;
	int n = lps.size();
	
	while(right < n && left < n){
		if(left == 0 && str[left] != str[right]){
			lps[right] = 0;
			right++;
		}
		if(str[left] == str[right]){
			lps[right] = left + 1;
			right++;
			left++;
		}else{
			while(left > 0 && str[left] != str[right]){
				left--;
				left = lps[left];
			}
		}
	}
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        vector<int> lps(str.length(), 0);
		buildLPS(str, lps);
		for(auto& x : lps)
			cout << x << " ";
		cout << endl;
    }

    return 0;
}