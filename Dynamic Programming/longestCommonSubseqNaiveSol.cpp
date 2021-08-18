/*
		=> Naive soution 
	Given two string s1, and s2
	Find length of Longest Common Subsequence
	i/P: ABCDGH, AEDFHR
	o/P: 3   -> ADH
	
	i/P: AGGTAB, GXTXAYB
	o.p: 4   -> GTAB
	
	i/p: xyz, xyz   
	o/p:  3   -> xyz
*/

#include<iostream>
#include<string>

using namespace std;

int getLongestSubseq(string s1, string s2, int m, int n)
{
	if(m == 0 || n == 0)
		return 0;
	if(s1[m-1] == s2[n-1])
		return 1 + getLongestSubseq(s1, s2, m-1, n-1);
	else
		return max(getLongestSubseq(s1, s2, m-1, n), getLongestSubseq(s1, s2, m, n-1));
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int lenLCS = getLongestSubseq(s1, s2, s1.length(), s2.length());
		cout << lenLCS << endl;
	}
	return 0;
}