/*
		MINIMUM COINS TO MAKE A VALUE
	For a given array of coins, find minimum number of coins we can 
	return as change that add up to val
	return -1 incase no solution exists
	
	i/p: 25  10  5;  val=30
	o/p: 2 => 25, 5
	
	i/p: 9  6  5  1;  val=11
	o/p: 2 => 6, 5
	
	
	9  6  5  1
	 
	f(coins, val, count, i):
		
		if val == 0
			return count
		
		if i >= n
			return INT_MAX
		
		res = min( f(coins, val - coins[i], count + 1, i),
				f(coins, val, count, i+1)
		)
		
		return res
*/

#include<iostream>
using namespace std;

int getMin(int arr[], int n, int val, int count = 0, int i = 0)
{
	if(val == 0)
		return count;
	
	if(i >= n)
		return INT_MAX;
	
	int res = INT_MAX;
	if(arr[i] <= val)
		res = getMin(arr, n, val - arr[i], count + 1, i);
	res = min(res, getMin(arr, n, val, count, i+1));
	
	return res;
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