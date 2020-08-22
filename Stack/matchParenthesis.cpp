// For a string of parenthesis
// Determine if each braket is matching or not

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

bool matchBracket(char a, char b)
{
    if(a == '(' && b == ')') return true;
    if(a == '{' && b == '}') return true;
    if(a == '[' && b == ']') return true;
    
    return false;
}

bool ispar(string x)
{
    stack<char> s;
    for(int i = 0; i < x.length(); i++)
    {
        char a = x[i];
        if(a == '(' || a == '{' || a == '[')
            s.push(a);

        else if(a == ')' || a == '}' || a == ']')
        {
            if(s.empty() == false && matchBracket(s.top(), a))
                s.pop();
            else
                return false;
        }
    }
    return s.empty();
}


// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends