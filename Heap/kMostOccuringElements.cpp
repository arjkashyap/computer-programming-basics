/*
Given an array arr[] of N integers in which elements may be 
repeating several times. Also, a positive number K is given
 and the task is to find sum of total frequencies of K most 
occurring elements

*/

#include <bits/stdc++.h> 
using namespace std; 

struct Elm
{
    int e;
    int f;
    Elm(int e, int f)
    {
        this -> e = e;
        this -> f = f;
    }
};

// comparator for the struct
struct Cmp
{
    bool operator()(Elm const& e1, Elm const& e2)
    {
        return e1.f < e2.f;
    }
};

// Function to print the k numbers with most occurrences 
int kMostFrequent(int arr[], int n, int k) 
{ 
    int res = 0;
	unordered_map<int, int> mp;
	for(int i = 0; i < n; i++)
	    mp[arr[i]]++;
	priority_queue<Elm, vector<Elm>, Cmp> pq;
	for(auto x : mp)
	    pq.push(Elm(x.first, x.second));
	
    while(k > 0)
    {
        Elm top = pq.top();              // Element with max freq
        pq.pop();
        res += top.f;
        k--;
    }
    return res;	
} 


int main() 
{
	int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        cin >> k;
        cout << kMostFrequent(arr, n, k) << endl; 
    }

	return 0; 
} 
