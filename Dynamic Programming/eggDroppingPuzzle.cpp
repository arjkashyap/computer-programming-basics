// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    
    /*
    
                    floors    
                 0  1  2  3  4  
        eggs  0  0  0  0  0  0 
              1  0  1  2  3  4
              2  0  1  
              
    */
    
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int eggDrop(int eggs, int floors)
    {
    	if(eggs == 0 || floors == 0)
    		return 0;
    	if(eggs == 1)
    		return floors;
    	
    	int dp[eggs+1][floors+1];
    	
    	// if we have zero eggs, outcome will be zero in all case
    	for(int i = 0; i <= floors; i++)
    	    dp[0][i] = 0;
    	
    	// if we have zero floors, we can drop 0 eggs in all cases
        // if we have only one floor, we need min 1 drop
    	for(int i = 0; i <= eggs; i++){
     	    dp[i][0] = 0;
    	    dp[i][1] = 1; 	    
    	}

    	 
    	
    	// if we have only one egg, we'll need to drop it at every floor for testing
    	// i;e if eggs = 1, drops = floors
    	for(int i = 0; i <= floors; i++)
    	    dp[1][i] = i;
    	
    	
    	for(int egg = 2; egg <= eggs; egg++){
    	    for(int curr_floor = 2; curr_floor <= floors; curr_floor++){
    	        dp[egg][curr_floor] = INT_MAX;  // place holder
    	        int drops;
    	        for(int x = 1; x <= curr_floor; x++){
    	           //             does not break       breaks
    	            drops = 1 + max(dp[egg][curr_floor - x], dp[egg-1][x-1]);
    	            dp[egg][curr_floor] = min(dp[egg][curr_floor], drops);

    	        }
    	        
    	    }
    	}
        return dp[eggs][floors];
    }
    

    
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}
