// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

#include<stack>

class Solution
{
    public:
    
    void delMid(stack<int>&s, int currSize, int mid)
    {
        int top = s.top();
        s.pop();
        if(currSize == mid){
            return;
        }
        delMid(s, currSize-1, mid);
        s.push(top);
    }
    
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int mid = ceil(sizeOfStack/2.0);
        delMid(s ,sizeOfStack, mid);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends