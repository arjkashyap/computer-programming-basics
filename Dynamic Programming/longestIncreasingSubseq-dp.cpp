/*
	LONGEST INCREASING SUBSEQ:
	                      n        lastSmallestElement=4,    count=4
	i/p: 3, 4, 2, 8, 10
	o/P; 4
	
	i/P; 4, 10, 6, 5, 8, 11, 2, 20
	o/p: 5
	
	i/P: 10, 20, 30
	o/P: 3
	
	i/P: 30, 20, 10
	o/P: 1
	
	
*/

#include<iostream>
#include<vector>

using namespace std;

int lis(int arr[], int n, int count, int lastSmallestElement, vector<int>& dp)
{
	int result; 			
	if(dp[n] != -1){
		return dp[n];
	}
	else{
		if(n < 1)
			return count;

		int resultExcluding;   // result we get if we include the current element
		int resultIncluding;    // result we get if we exclude it
		
		resultExcluding = lis(arr, n-1, count, lastSmallestElement, dp);
		// include arr[n-1]th element
		if(arr[n-1] < lastSmallestElement){
			resultIncluding = lis(arr, n-1, count+1, arr[n-1], dp);
		}
		
		result = max(resultIncluding, resultExcluding);
		dp[n] = result;
		return result;
	}
}


int longestIncreasingSubseq(int* a, int n)
{
	if(n==0 || n==1) return n;
	
	int res = 1;
	vector<int> dp(n+1, -1);
	
	res = lis(a, n-1, res, a[n-1], dp);
	return res;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++) cin >> arr[i];
		
		int res = longestIncreasingSubseq(arr, n);
		
		cout << res << endl;
	}
	return 0;
}