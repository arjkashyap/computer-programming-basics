#include<iostream>
using namespace std;

/*
	0-1 Knapsack Problem
	
	i/p: value: 10  40  30  50; w: 5  4  6  3; w_lt = 10
	o/p: 90    =>   50 + 40
	
	i/p: value: 60  100  120; w: 10  20  30; w_lt = 50
	o/p: 220  => 100 + 120
	
	
*/

int knapSack(int* value, int* weights, int n, int limit, int curr_val=0)
{
	
	if(n == 0)
		return curr_val;
	
	
	int max_val = INT_MIN;
	// exclude
	max_val = max(max_val, knapSack(value, weights, n-1, limit, curr_val));
	
	// include
	if(weights[n-1] <= limit)
		max_val = max(max_val, knapSack(value, weights, n-1, limit - weights[n-1], curr_val + value[n-1]));
	
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