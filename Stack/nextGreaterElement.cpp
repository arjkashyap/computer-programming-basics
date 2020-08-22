// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector <long long> nextLargerElement(long long arr[], int n)
{
    vector<long long> res(n, -1);
    stack<int> s;
    for(int i = 0; i < n; i++)
    {
        while(s.empty() == false && arr[i] > arr[s.top()])
        {
            int tp = s.top();    // index at top
            s.pop();
            res[tp] = arr[i];
        }
        s.push(i);
    }
    
    return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        vector <long long> res = nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
