/*
	Return an array of first N fibbonacci seq
/*

// { Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

typedef long long ll;

class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<ll> res(n);
        res[0]=1;
        res[1]=1;
        for(int i = 2; i < n; i++){
            ll nextNum = res[i-1] + res[i-2];
            res[i]=nextNum;
        }
        
        return res;
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
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}
  // } Driver Code Ends