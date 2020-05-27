// Implementation of topological sorting using dfs
// Detect cycle in a cyclic directed graph 

#include<bits/stdc++.h>

typedef std::vector<int> g;

void addEdge(g *adj, int u, int v)
{
    adj[u].push_back(v);
}

void dfsSort(g *adj, int s, bool *vis, std::stack<int> &st)
{
    vis[s] = true;
    for(auto v : adj[s])
        if(vis[v] == false)
            dfsSort(adj, v, vis, st);
    
    st.push(s);
}

void topoSort(g *adj, int V)
{
    bool vis[V];
    std::stack<int> s;
    for(int i = 0; i < V; i++)
        vis[i] = false;
    for(int i = 0; i < V; i++)
        if(vis[i] == false)
            dfsSort(adj, i,  vis, s);
    while(s.empty() == false){
        std::cout << s.top() << " ";
        s.pop();
    }
}

int main()
{
    int V = 5;
    g adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 2, 4);
    topoSort(adj, V);
    return 0;
}
