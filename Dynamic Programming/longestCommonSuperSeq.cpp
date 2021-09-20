#include<iostream>
using namespace std;

/*
		Shortest Common Supersequence
	Given two strings X and Y of lengths m and n respectively,
	find the length of the smallest string which has both, 
	X and Y as its sub-sequences.
	
	
	i/p: abcd, xycd
	o/p: 6  => abxycd
	
	i/p: efgh, y = jghi
	o/p: 6  => ejfghi  
	
		x, a
	
				  m+1
		   ""  x  y  c  d
		""  0  0  0  0  0
		a   0  x
	n+1	b   0
		c   0
		d   0
	
*/

int shortestCommonSupersequence(string X, string Y, int m, int n)
{
	if(m==0 && n == 0)
		return 0;
	if(m==0)
		return n;
	if(n==0)
		return m;
		
	// first we find the length of longest common subsequence
	int dp[m+1][n+1];
	memset(dp, 0, sizeof(dp));

	// forming the cache matrix
	for(int i = 1; i <= m; i++){
		for(int j =1; j <= n; j++){
			if(X[i-1] == Y[j-1])
				dp[i][j] =  1 + dp[i-1][j-1];
			else 
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	return (m + n - dp[m][n]);
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		string s1;
		string s2;
		cin >> s1 >> s2;
		
	}
	return 0;
}