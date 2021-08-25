/*
	LONGEST INCREASING SUBSEQ USING BINARY SEARCH
	                      n        lastSmallestElement=4,    count=4
	i/p: 3, 4, 2, 8, 10
	o/P; 4
	
	i/P; 4 10  6  5  8  11  2 20
	o/p: 5
	
	i/P: 10, 20, 30
	o/P: 3
	
	i/P: 30, 20, 10
	o/P: 1
	                                 i 
	   arr = 4, 10, 6, 5, 8, 11, 2, 20
	   aux = [2 5 8 11, 20]
	   
	   
*/

#include<iostream>
#include<vector>

using namespace std;

// function finds the index of ceil of x
int ceilIndex(vector<int> arr, int x)
{
	// 2 5 8 11, 20, x = 3
	int lo = 0, hi = arr.size()-1;
	int mid;
	while(lo < hi){
		mid = (lo + hi)/2;
		if(arr[mid] > x)
			hi = mid;
		else
			lo = mid + 1;
	}
	return mid;
}

//Function to find length of longest increasing subsequence.
int longestSubsequence(int n, int a[])
{
	vector<int> aux;
	for(int i = 0; i < n; i++){
		if(aux.empty() == false && a[i] <= aux[aux.back()])
			aux[ceilIndex(aux, a[i])] = a[i];
		else
			aux.push_back(a[i]);
	}
	for(auto x : aux)
		cout << x << " ";
	cout << endl;
	return aux.size();
}



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
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout << longestSubsequence(n, a) << endl;
    }
}