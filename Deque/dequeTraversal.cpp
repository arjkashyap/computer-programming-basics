// Traversing the elements of deque from front

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


void printDeque(deque<int> dq)
{
    while(dq.empty() == false)
    {
        int x = dq.front();
        cout << x << " ";
        dq.pop_front();
    }
    
}    

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        deque<int> Deq;
        for(int i = 0; i < n; i++)
        {
            int val;
            cin>>val;
            Deq.push_back(val);
        }
        printDeque(Deq);
        cout << endl;
    }
}