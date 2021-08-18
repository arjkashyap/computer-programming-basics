/*
=>  MEMOIZATION BASED SOLUTION 
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

#define MAX_SIZE 200


int getLongestSubseq(string s1, string s2, int m, int n, int MEMO[MAX_SIZE][MAX_SIZE])
{
	// is not present in memo array
	if(MEMO[m][n] == -1){
		if(m == 0 || n == 0){
			MEMO[m][n] = 0;
		}
		else if(s1[m-1] == s2[n-1])
			MEMO[m][n] = getLongestSubseq(s1, s2, m-1, n-1, MEMO);
		else 
			MEMO[m][n] = max(getLongestSubseq(s1, s2, m-1, n, MEMO), getLongestSubseq(s1, s2, m, n-1, MEMO));
		
	}
	return MEMO[m][n];
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int MEMO[MAX_SIZE][MAX_SIZE] = {{-1}};
		
		int lenLCS = getLongestSubseq(s1, s2, s1.length(), s2.length());
		cout << lenLCS << endl;
	}
	return 0;
}