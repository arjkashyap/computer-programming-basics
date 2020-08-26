// Reverse a queue

#include<bits/stdc++.h>
using namespace std;
queue<long long int> rev(queue<long long int> q);
int main()
{
    long long int test;
    cin>>test; 
    while(test--)
    {
    queue<long long int> q; 
    long long int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<long long int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }

queue<long long int> rev(queue<long long int> q)
{
    stack<long long int> s;
    while(q.empty() == false)
    {
        int f = q.front();
        q.pop();
        s.push(f);
    }
    while(s.empty() == false)
    {
        int t = s.top();
        s.pop();
        q.push(t);
    }
    return q;
}