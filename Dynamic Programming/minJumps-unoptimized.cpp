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

*/

int minJumps(int* arr, int n)
{
	
	if(n == 1)
		return 0;
	
	int res = INT_MAX;
	// for the nth cell, find prev cells that can reach it
	for(int i = 0; i <= n-2; i++){
		
		// check if the ith cell can reach nth cell
		if(arr[i] + i >= n-1){
			int sub_res = minJumps(arr, i+1);
			
			if(sub_res != INT_MAX)
				res = min(res, sub_res + 1);
			
		}
	}
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
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		int res = minJumps(arr, n);
		cout << res << endl;

	}
	
	return 0;
}