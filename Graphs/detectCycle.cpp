// For a given graph, detect if there is a cycle or not

#include<bits/stdc++.h>

typedef std::vector<int> g;

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


bool detectCycle(vector<int> *adj, int s, bool *vis, int par = -1)
{
    vis[s] = true;
    for(auto v : adj[s])
    {
        if(vis[v] && v != par)
            return true;
        if(!vis[v])
            if(detectCycle(adj, v, vis, s))
                return false;
            
    }
    return false;
}


bool isCyclic(vector<int> adj[], int V)
{
   bool vis[V];
   for(int i = 0; i < V; i++)
    vis[i] = false;
    
   for(int i = 0; i < V; i++)
        if(!vis[i])
            if(detectCycle(adj, i, vis))
                return true;
                
   return false;
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
    isCyclic(adj, V);
    return 0;
}
