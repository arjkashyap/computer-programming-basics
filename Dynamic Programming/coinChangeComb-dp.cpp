// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

typedef long long ll;

class Solution
{
    public:
    
    ll computeComb(int* coins, int n, int sum, vector<vector<ll>>& dp)
    {
        if(dp[n][sum] != -1) return dp[n][sum];
        
        if(n==0) return 0;
        if(sum == 0) return 1;
        
        ll res = computeComb(coins, n-1, sum, dp);
        if(coins[n-1] <= sum)
            res += computeComb(coins, n, sum-coins[n-1], dp);
        
        dp[n][sum] = res;
        
        return res;
    }
    
    //Function to find out the number of ways to use the coins to
    //sum up to a certain required value.
    long long numberOfWays(int coins[],int numberOfCoins,int value)
    {
        if(numberOfCoins <= 1) return numberOfCoins;
        
        // initialize dp matrix[n][value]
        vector<vector<ll>> dp(numberOfCoins+1);
        for(int i = 0; i < dp.size(); i++){
            vector<ll> row(value+1, -1);
            dp[i] = row;
        }
        
        ll result = computeComb(coins, numberOfCoins, value, dp);
        return result;
    }
};


// { Driver Code Starts.


int main() {
    
    //taking total count of testcases
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    //taking value
	    int value;
	    cin>>value;
	    
	    //taking number of coins
	    int numberOfCoins;
	    cin>>numberOfCoins;
	    int coins[numberOfCoins];
	    
	    //inserting coins to the array
	    for(int i=0;i<numberOfCoins;i++)
	    cin>>coins[i];
	    Solution obj;
	    //calling function numberOfWays
	    cout<<obj.numberOfWays(coins,numberOfCoins,value)<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends