/*
		MINIMUM COINS TO MAKE A VALUE
	For a given array of coins, find minimum number of coins we can 
	return as change that add up to val
	return -1 incase no solution exists
	
	i/p: 25  10  5;  val=30
	o/p: 2 => 25, 5
	
	i/p: 9  6  5  1;  val=11
	o/p: 2 => 6, 5
	
	
	9  6  5  1; val = 7
		
	     1  5   6     9
	
   [ 0 Inf  Inf  Inf  Inf  Inf  Inf ]
		
		
*/

#include<iostream>
using namespace std;

int getMin(int arr[], int n, int val)
{
	int dp[val+1] = {INT_MAX};
	dp[0] = 0; 		// answer when val=0 is 0
	
	for(int i = 1; i <= val; i++){
		for(int c = 0; c < n; c++){
			if(arr[c] < i){
				int sub_sol = dp[i - arr[c]];
				if(sub_sol != INT_MAX)
					dp[i] = min(dp[i], sub_sol+ 1);
			}
			
		}
	}
	
	return dp[val];
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, val;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++) 
			cin >> arr[i];
		cin >> val;
		int res = getMin(arr, n, val);
		if(res == INT_MAX)
			cout << "No solution exists ";
		else 
			cout << res;
		cout << endl;
	}
}