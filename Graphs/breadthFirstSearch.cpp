// DFS of a graph

#include<bits/stdc++.h>
using namespace std;

void dfs(int s, vector<int> g[], bool vis[])
{
    vis[s] = true;
    cout << s << " ";
    
    for(auto v : g[s]){
        if(!vis[v])
            dfs(v, g, vis);
    }

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

        dfs(0,g,vis);
        cout<<endl;

    }
}
