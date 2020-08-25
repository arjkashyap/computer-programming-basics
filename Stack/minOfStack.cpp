// Print the minimum element in the stack every time it is popped

// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

 // } Driver Code Ends


stack<int> mins;


//User function Template for C++

/* inserts elements of the array into 
   stack and return the stack
*/
stack<int> _push(int arr[],int n)
{
    int min = INT_MAX;
    stack<int> s;
   for(int i = 0; i < n; i++)
   {
       int x = arr[i];
       s.push(x);
       if(x <= min)
       {
           min = x;
           mins.push(x);
       }
   }
   return s;
}

/* print minimum element of the stack each time
   after popping
*/
void _getMinAtPop(stack<int>s)
{
    while(s.empty() == false)
    {
        int tp = s.top();
        s.pop();
        cout << mins.top() << " ";
        if(tp == mins.top())
            mins.pop();
    }
}


// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    cout<<endl;
	    
	    
	    
	}
	return 0;
}

  // } Driver Code Ends