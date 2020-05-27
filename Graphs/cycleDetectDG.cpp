// Detect cycle in a cyclic directed graph 
// using Kahns algorithm

#include<bits/stdc++.h>

typedef std::vector<int> g;

void addEdge(g *adj, int u, int v)
{
    adj[u].push_back(v);
}

bool isCycle(adj, V)
{
    int ind[V] = {0};
    for(int i = 0; i < V; i++){
        for(auto u : adj[i])
            ind[u]++;
    }
    int count = 0;
    std::queue<int> q;
    for(int i = 0; i < V; i++)
        if(ind[i] == 0)
            q.push(i);
    while(q.empty() == false){
       int curr = q.front();
       q.pop();
       for(auto u : adj[curr]){
        ind[u]--;
        if(ind[u] == 0)
            q.push(u);
       }
       count++;
    }
    return count != V;
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
    return 0;
}
