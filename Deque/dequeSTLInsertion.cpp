// For a given array of elements, push them in deque and return them

#include <bits/stdc++.h>
using namespace std;

deque<int> deque_Init(int arr[], int n)
{
    // add your code here
    deque<int> dq;
    for(int i = 0; i < n; i++)
        dq.push_back(arr[i]);
    return dq;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n; 
        
        int arr[n];
        for(int i = 0; i < n; i++)
            cin>>arr[i];
            
        deque<int> res = deque_Init(arr, n);
        for(auto x : res)
         cout << x << " ";
         
        cout << endl;
    }
}

