

#include <bits/stdc++.h>
using namespace std;

/* 
	coins= [1, 2, 3], sum = 4                                               
	
	                              2    2                                        
	expression => res = f(coins, n-1, sum) + (if coins[n-1] <= sum (f(coins, n, sum-coins[n-1])))
	 
	    n = 3 sum = 2;    
         
			  n (coins)
	       0  1  2  3  
	    0  1  1  1  1
		1  0  1  1  1
  sum	2  0  1  1  2
	    3  0  1  2  3
		4  0  1  3  4
*/ 

#include <iostream>
#include <string.h>
using namespace std;


int getCount(int coins[], int n, int sum)
{
    int dp[sum+1][n+1];
    
    for(int i=0;i<=n;i++)
    {
        dp[0][i]=1;
    }
    
    for(int j=0;j<=sum;j++)
    {
        dp[j][0]=0;
    }
    
    for(int i=1;i<=sum;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j] = dp[i][j-1];
            
            if(coins[j-1]<=i)
            dp[i][j]+=dp[i-coins[j-1]][j];
        }
    }
    
    return dp[sum][n];
    
}

int main() {
	
	
int coins[]={1, 2, 3}, sum=4, n=3;

cout<<getCount(coins, n, sum);
	

}