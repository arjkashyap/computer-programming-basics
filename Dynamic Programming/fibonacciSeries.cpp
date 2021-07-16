#include<iostream>
#include<vector>
using namespace std;

/*
	Fibonacci Series using memoization
*/

int fib(vector<int>& memo, int n)
{
	if(memo[n] == -1){
		int res;
		if(n == 0 || n == 1)
			return n;
		res =  fib(memo, n-1) + fib(memo, n-2);
		memo[n] = res;
	}
	return memo[n];
}

int main()
{
	int n;
	cin >> n;
	// zero based index
	vector<int> memo(n+1, -1);
	cout << fib(memo, n);
	cin.get();
	return 0;
}