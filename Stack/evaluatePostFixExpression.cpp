// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


#include<stack>

class Solution
{
    public:
    
    int performOperation(int a, int b, char op)
    {
        switch(op){
            case '*':
                return a * b;
            case '/':
                return a/b;
            case '+':
                return a + b;
            case '-':
                return a - b;
        }
        return -1;
    }
    
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int> s;
        for(int i = 0; i < S.size(); i++){
            int currChar = S[i];
            
            // add nums to stack 
            if(currChar >= '0' && currChar <= '9'  ){
                s.push(currChar - '0');
            }
            else{
                int op2 = s.top();
                s.pop();
                int op1 = s.top();
                s.pop();
                int res = performOperation(op1, op2, currChar);
                s.push(res);
            }
        }
        return s.top();
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends