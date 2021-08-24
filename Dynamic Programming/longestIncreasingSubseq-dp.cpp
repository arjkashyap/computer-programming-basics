// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    
    /*
        dp[i] = dp[j -> j is index of closest smaller element from i] + 1
                           i
      arr      5  8  3  7  9  1
      dp     [ 1  2  1  2  3  1 ]
                     i
        i/p: 5 8 3 7 9 1
        o/p: 3
    */
    
    int getMax(vector<int> v)
    {
        int res = INT_MIN;
        for(auto x : v){
            if(x > res)
                res = x;
        }
        return res;
    }
    
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        int res = -1;
        vector<int> dp(n, -1);
        for(int i = 0; i < n; i++){
            int lisSize = 0; // length of longest inc subseq uptill i
            int j = i-1;
            while(j >= 0){
                if(a[j] < a[i]){
                    lisSize = max(lisSize, dp[j]);
                }
                j--;
            }
            dp[i] = 1 + lisSize;
        }
        res = getMax(dp);
        return res;
    }
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends