// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int>_push(int arr[],int n);

void _getMinAtPop(stack<int>s);

 // } Driver Code Ends



stack<int> min_stack;


stack<int>_push(int arr[],int n)
{
    stack<int> st;
    
    for(int i = 0; i < n; i++)
    {
        if(min_stack.empty())
            min_stack.push(arr[i]);
        else if(min_stack.empty() == false && arr[i] <= min_stack.top())
            min_stack.push(arr[i]);
        st.push(arr[i]);
    }
    return st;
}

/* print minimum element of the stack each time
   after popping
*/
void _getMinAtPop(stack<int>s)
{
    while(s.empty() == false)
    {
        int top = s.top();
        s.pop();
        cout << min_stack.top() << " ";
        if(top == min_stack.top())
        min_stack.pop();
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