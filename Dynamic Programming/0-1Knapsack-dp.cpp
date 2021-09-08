#include<iostream>
using namespace std;

/*
	0-1 Knapsack Problem
	
	i/p: value: 10  40  30  50; w: 5  4  6  3; w_lt = 10
	o/p: 90    =>   50 + 40
	
	i/p: value: 60  100  120; w: 10  20  30; w_lt = 50
	o/p: 220  => 100 + 120
	
	
	value: 10  40  30  50
	w:     5  4  6  3;   lt = 10
	
	
				n  -> 
		    0   1  2  3   4
		0 	0   0  0  0   
		1   0
		2   0
		3   0
		4   0
w_lt	5   0
		6   0
		7   0
		8   0
		9   0
	
	
*/

int knapSack(int* value, int* weights, int n, int limit, int curr_val=0)
{
	dp[limit + 1][n+1];

	
	return max_val;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, limit;
		cin >> n;
		int value[n];
		int weights[n];
		cout << "Enter value array:" << endl;
		for(int i = 0; i < n; i++)
			cin >> value[i];
		cout << "Enter weigths array:" << endl;
		for(int i = 0; i < n; i++)
			cin >> weights[i];

		cout << "Enter limit:\n";
		cin >> limit;
		
		int res = knapSack(value, weights, n, limit);
		cout << res << endl;
		
	}
	return 0;
}