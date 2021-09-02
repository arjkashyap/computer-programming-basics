/*
	Implement strStr()
	
	using kmp algorithm:
		
		i/p: adsgwadsxdsgwadsgz, dsgwadsgz
		o/p: 9
		
		i/p: hello, ll
		o/p: 2
                    
		i/p: baaagadbaad, baad
		o/p: 7
		
		            i
		b  a  a  b  g  a  d  b  a  a  d; 
		
		      j
		b  a  a  b  d
		
		0  0  0  1 0
		
*/

#include<iostream>
#include<vector>

using namespace std;

void buildLPS(string str, vector<int>& lps)
{
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

//abcda

//eijk
//[0 0 0 0]

// return occurence index of pattern else return -1;
int strStr(string str, string pattern) 
{

	int m = str.size();
	int n = pattern.size();
	
	// form the lps array
	vector<int> lps(pattern.size(), 0);
	buildLPS(pattern, lps);
	for(auto x : lps)
		cout << x << " ";
	cout << endl;
	int i = 0;
	int j = 0;
	while(i < m && j < n){
		cout << i << " " << j << endl;
				
		if(str[i] == pattern[j]){
			i++;
			j++;
		}
		if(j == n)
			return i-j;
		else if(i < m && pattern[j] != str[i]){
			if(j == 0)
				i++;
			else
				j = lps[j-1];
		}
	}
	
	return -1;
}

int main()
{
	int t; 
	cin >> t;
	while(t--){
		string str, pattern;
		cin >> str >> pattern;
		int res = strStr(str, pattern);
		cout << res << endl;
	}
	return 0;
}