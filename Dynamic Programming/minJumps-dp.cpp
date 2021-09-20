#include<iostream>

using namespace std;

/*
	MINIMUM JUMPS TO REACH END
	
	Given an array arr[i] where i>=0 to n
	arr[i] denotes the maximum index that can
	be jumpted from that index
	
	You have to return the min number of jumps that 
	can be made to reach the end of the array
	
	i/p: 3  4  2  1  2  1; n=6
	o/p: 2    => 0 -> 1 -> 5
	
	i/p: 4  1  5  3  1  3  2  1  8; n=9
	o/p: 3    => 0 -> 4 -> 8
	
        0  1  2  3  4  5
		3  4  2  1  2  1
		
		    i-arr[i]
			
	                        i
	   3    4   2   1   2   1
	   0   1    1   1    2   1 
	   
	   4 + 1 >=5
	   
	   for i <- 1 to n-1:
		  for j <- 0 to i: 
			if(arr[j] + j >= i && arr[j] != INT_MAX)
				dp[i] = min(dp[i], dp[j] + 1)
				
	   return dp[n]

*/

int minimumJumps(int arr[], int n){
	
	int dp[n+1] = {INT_MAX};
	dp[0] = 0;
	
	for(int i = 0; i <= n; i++){
		for(int j = 0; j < i; j++){
			if(arr[j] + j >= i && arr[j] != INT_MAX)
				dp[i] = min(dp[i], dp[j] + 1);
		}
	}
	return dp[n];
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		int res = minimumJumps(arr, n);
		cout << res << endl;

	}
	
	return 0;
}