// Given an array of N positive integers,
// print k largest elements from the array. 

#include<bits/stdc++.h>
using namespace std;

vector<int> kLargest(int arr[], int n, int k)
{
    vector<int> res;
    priority_queue<int> pq;
    for(int i = 0; i < n; i++)
        pq.push(arr[i]);
    while(k--)
    {
        int top = pq.top();
        pq.pop();
        res.push_back(top);
    }
    return res;
}

vector<int> kLargest(int arr[], int n, int k);

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        
        vector<int> result = kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}
