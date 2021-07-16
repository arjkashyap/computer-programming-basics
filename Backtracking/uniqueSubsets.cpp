// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:


    // arr = {1, 2, 2}
    void permute(int index, vector<int>& arr, vector<vector<int>>& subsets, vector<int>& curr)
    {
    
        subsets.push_back(curr);
        for(int i = index; i < arr.size(); i++){
            if(i == index || arr[i] != arr[i-1]){
                curr.push_back(arr[i]);
                permute(i+1, arr, subsets, curr);
                curr.pop_back();
            }
        }
    }
    
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        // code here 
        vector<vector<int>> subsets;
        vector<int> curr;
        sort(arr.begin(), arr.end());
        permute(0, arr, subsets, curr);
        return subsets;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends