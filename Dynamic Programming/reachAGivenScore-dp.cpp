// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll count(ll n);

int main()
{
    //taking total testcases
	int t;
	cin>>t;
	
	while(t--)
	{
	    //taking the score
		ll n;
		cin>>n;
		
		//calling function count()
		cout << count(n) << "\n";
	}
	return 0;
}// } Driver Code Ends


//User function tempate for C++

//   0 1 2 3 4 5 6 7 8
//   1 0 0 1 0 1 1 0 1

//Function to find the number of distinct combinations to reach the given score.
ll count(ll n) 
{
    //table[i] will store count of solutions for value i.
	ll table[n+1],i;
	
	//initializing all values in table with 0.
	memset(table, 0, sizeof(table));
	
	//base case
	table[0]=1;  
	
	//one by one we consider given 3 moves and update the table[] values after
    //the index greater than or equal to the value of the picked move.
	for(i=3;i<=n;i++)
		table[i]+=table[i-3];  
	for(i=5;i<=n;i++)           
		table[i]+=table[i-5];
	for(i=10;i<=n;i++)
		table[i]+=table[i-10];
	
	//returning the result.	
	return table[n];
}