// Shortest path in a directed acyclic graph to every other vertex
// The graph is a weighted graph
// Implementation of topological sorting using dfs
// Detect cycle in a cyclic directed graph 

#include<bits/stdc++.h>

typedef std::vector<int> g;

void addEdge(g *adj, int u, int v)
{
    adj[u].push_back(v);
}


int main()
{
    int V = 6;
    g adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 2, 4);
    topoSort(adj, V);
    return 0;
}
