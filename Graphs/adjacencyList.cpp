// Implementation of Graphs using adjacency list

#include<bits/stdc++.h>

void addEdge(std::vector<int> *adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);        // The graph is undirected
}

void printGraph(std::vector<int> *adj, int v)
{
    for(int i = 0; i < v; i++)
    {
        std::cout << i << " -> ";
        for(auto x : adj[i])
            std::cout << x << " ";
    std::cout << "\n";
    }
}

int main(){
    int v = 4;      // Number of vertices

    // We create an array of vectors
    std::vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);

    printGraph(adj, v);

    return 0;
}
