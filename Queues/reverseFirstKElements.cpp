// Given a number k and a Queue
// Reverse the first k elements of the queue


//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }



queue<ll> modifyQueue(queue<ll> q, int k)
{
    //add code here.
    stack<int> s;
    int j = q.size() - k;
    while(q.empty() == false && k > 0)
    {
        int f = q.front();
        q.pop();
        s.push(f);
        k--;
    }
    
    while(s.empty() == false)
    {
        int t = s.top();
        s.pop();
        q.push(t);
    }
    
    while(q.empty() == false && j != 0)
    {
        int f = q.front();
        q.pop();
        q.push(f);
        j--;
    }
    
    return q;
}