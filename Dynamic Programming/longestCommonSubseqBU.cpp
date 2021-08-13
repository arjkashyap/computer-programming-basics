/*
	Longest common subsequence using tablulation / bottoms upper_bound
	ADSSHTA, XNASHT => 4
	XYNATIIE, YAE => 3
	
*/

#include<iostream>
#include<string>

using namespace std;

// AXYZ, BAZ

int countLCS(string s1, string s2)
{
	int m = s1.length(), n = s2.length();
	int dp[m+1][n+1] = {{-1}}; 
	
	// fill first horizontal row
	for(int i = 0; i < n; i++)
		dp[0][i]=0;
	
	// fill first vertical column
	for(int i = 0; i < m; i++)
		dp[i][0]=0;
	
	for(int i = 0; i <= m; i++){
		for(int j = 0; j <= n; j++){
			if(s1[i] == s2[j])
				dp[i][j] = 1 + dp[i-1][j-1];
			else
				dp[i][j] = max(dp[i-1], dp[j-1]);
		}
	}
	
	return dp[m][n];
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int res = countLCS(s1, s2);
		return res;
	}
	return 0;
}

