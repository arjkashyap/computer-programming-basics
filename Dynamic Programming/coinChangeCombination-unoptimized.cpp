#include<iostream>
using namespace std;

/*
	For a given sum, and array of coins
	find the number of combinations the sum can be returned using the coins 
	
	i = n-1;  n =3, i = 2 
	
	               i    
	coins = [1, 2, 3]
	sum = 4
	
  1)	1 + 1 + 1 + 1
  2)	1 + 1 + 2
  3)	1 + 3
  4)	2 + 2
	=> 4
*/

int combCount(int* coins, int n, int sum)
{
	if(n == 0)   return 0;
	if(sum == 0) return 1;
	
	int res = combCoin(coins, n-1, sum);
	if(coins[n-1] < sum)
		res += combCoin(coins, n, sum-coins[n-1]);
	
	return res;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, sum;
		cin >> n;
		int coins[n];
		for(int i = 0; i < n; i++)
			cin >> coins[i];
		cin >> sum;
		int count = combCount(coins, n, sum);
		cout << count << endl;
	}
	return 0;
}