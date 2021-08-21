#include<iostream>
#include<string>

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
	                 1
	    1 + min(  f(m-1, n), f(m, n-1), f(m-1, n-1) )
	            n
	    "" L  A  Z  Y
	""  0  1  2  3  4
	C   1  1  2  3  4
	R   2  2  2  3  4
  m	A   3  3  2  3  4 
	Z   4  4  3  2  3
	Y   5  5  4  3  2
	
*/

// get min of 3 numbers
int minNum(int a, int b, int c)
{
	return min(min(a, b), c);
}

int countEdits(string s1, string s2, int m, int n)
{
	int dp[m+1][n+1] = {{-1}};   // dp table
	
	// fill first row & col
	for(int i = 0; i <= n; i++)
		dp[0][i] = i;
	for(int i = 0; i <= m; i++)
		dp[i][0] = i;
	
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			if(s1[i-1] == s2[j-1]){
				dp[i][j] = dp[i-1][j-1];
			}else{
				dp[i][j] = 1 + minNum(
								dp[i-1][j], 
								dp[i][j-1], 
								dp[i-1][j-1]
								);
			}
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
		int res = countEdits(s1, s2, s1.length(), s2.length());
		cout << res << endl;
	}
	
	return 0;
}