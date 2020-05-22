// Given a graph and source s, print the bfs

#include<bits/stdc++.h>

typedef std::vector<int> graph;

void addEdge(graph *adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);        // The graph is undirected
}

void printGraph(graph *adj, int v)
{
    for(int i = 0; i < v; i++)
    {
        std::cout << i << " -> ";
        for(auto x : adj[i])
            std::cout << x << " ";
    std::cout << "\n";
    }
}

// Function takes vertex list, total nodes and source node
// prints breadth first traversal of a graph
void bfsGraph(std::vector<int> g[], int n, int s)
{
    if(n == 0)
        return;
    std::vector<bool> visited;
    std::queue<int> q;
    for(int i = 0; i < n; i++)
        visited[i] = false;
    q.push(s);
    visited[s] = true;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        std::cout << u << " ";
        for(int v : g[u] )
        {
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
            }
        }
    }
    std::cout << "\n";
}

int main(){
    int v = 4;      // Number of vertices

    // We create an array of vectors
    graph adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);

    bfsGraph(adj, v, 0);
    return 0;
}
