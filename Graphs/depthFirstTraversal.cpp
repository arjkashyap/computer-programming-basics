// DFS of a graph

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> g[], bool* vis, vector<int>& res, int curr)
{
    if(vis[curr])
        return;
    vis[curr] = true;

    res.push_back(curr);
    for(int k = 0; k < g[curr].size(); k++)
        dfs(g, vis, res, g[curr][k]);
}

vector <int> dfs(vector<int> g[], int N)
{
    bool vis[N] = {false};
    vector<int> res;
    for(int i = 0; i < N; i++){
        if(vis[i] == true)
            continue;
        vis[i] = true;
        res.push_back(i);
        for(int j = 0; j < g[i].size(); j++)
            dfs(g, vis, res, g[i][j]);
    }
    return res;
}


int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        int N, E;
        cin>>N>>E;
        
        vector<int> g[N];
        bool vis[N];
        
        memset(vis, false, sizeof(vis));
        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector <int> res = dfs(g, N);
        for (int i = 0; i < res.size (); i++)
            cout << res[i] << " ";
        cout<<endl;

    }