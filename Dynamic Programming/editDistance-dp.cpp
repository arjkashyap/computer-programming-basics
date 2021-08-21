#include<iostream>
#include<string>
#include<vector>

using namespace std;

/*
	Edit distance problem
	Given two strings, s1 and s2, we need to convert 
	s1 into s2 using minimual number of operations
	
	operations: Cut, Insert, Replace
	
	i/p: "CAT", "CUT"
	o/p: 1     => A replaced by U
	
	i/p: "BAT", "BATS"
	o/p: 1     => Insert S
	
	       i	                        
	i/p: "SATURDAY", "SUNDAY"
	o/p: 3
	
	Remove / Replace 
	i/p: "CRAZY", "LAZY"
	o/P: 2
	
	m=8, n = 7
	0, 1, 2, 3, 4, 5, 6, 7
	    
	
*/

// min of 3 numbers
int minNum(int a, int b, int c)
{
	return min(min(a, b), c);
}

int getMinEdits(string s1, string s2, int m, int n, vector<vector<int>>& dp)
{
	int res;
	if(dp[m][n] != -1){
		res = dp[m-1][n-1];
	}
	else{
		if(m==0) return n;
		if(n==0) return m;
		
		// matching chars
		if(s1[m-1] == s2[n-1]){
			res = getMinEdits(s1, s2, m-1, n-1, dp);
		}else{
			res = 1 + minNum(
			getMinEdits(s1, s2, m-1, n, dp), 
			getMinEdits(s1, s2, m, n-1, dp), 
			getMinEdits(s1, s2, m-1, n-1, dp)
			);
		}
		
		dp[m][n] == res;
	}
	
	return res;
}

int minEdits(string s1, string s2, int m, int n)
{
	
	// initialize dp matrix
	vector<vector<int>> dp(m+1);
	for(int i = 0; i <= m; i++){
		vector<int> row(n+1, -1);
		dp[i] = row;
	}
	
	int res = getMinEdits(s1, s2, m, n, dp);
	
	return res;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int res = minEdits(s1, s2, s1.length(), s2.length());
		cout << res << endl;
	}
	return 0;
}