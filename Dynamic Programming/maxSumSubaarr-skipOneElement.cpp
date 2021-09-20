#include<iostream>

using namespace std;

/*
							MAX SUBARRAY BY REMOVING ATMOST ONE ELEMENT
		You are given array A of size n. You need to find the maximum-sum sub-array with 
		the condition that you are allowed to skip at most one element
		
		i/p: -2  -3  4  -1  -2  1  5  -3
        o/p: 9   => 4 + (-1) + 1 + 5 
		
		
	        f(a, n, index, local_max, global_max, skipped=false):
            
            if(index >= n-1):
                return global_max
            
            for i <- index to n-1:
                // skipping the element
                if(!skipped)
                    global_max = max(global_max, f(a, n, i+1, local_max, global_max, true))
                    continue
                
                // including the elemnt
                local_max = max(a[i], a[i] + local_max)
                global_max = max(global_max, local_max)
	
*/



int maxSumSubarray(int arr[], int n)
{
	if(n==1)  return a[0];
	
	int dp1[n] , dp2[n];
	
	dp1[0] = a[0];
	
	for(int i = 1 ; i < n ; i++)
	dp1[i] = max(dp1[i-1] + a[i] , a[i]);
	
	dp2[n-1] = a[n-1];
	
	for(int i = n-2 ; i >= 0 ; i--)
	dp2[i] = max(dp2[i+1] + a[i] , a[i]);
	
	int mx = INT_MIN , x, y;
	
	for(int i=0;i<n;i++)
	{
		x = ((i==0) ? 0 : dp1[i-1]);
		
		y = ((i==n-1) ? 0 : dp2[i+1]);
		
		mx = max(mx , max(x + y , dp1[i] + dp2[i] - a[i]));
	}
	return mx;
    }
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i]; 
		
		cout << maxSumSubarray(arr, n) << endl;
	}
	return 0;
}