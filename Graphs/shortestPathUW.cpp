// Find the shortest path in an undirected graph from a source to every vertex
// Here we will use BFS for finding the distance from 0 to every node

#include<bits/stdc++.h>

typedef std::vector<int> g;
#define ct std::cout

void addEdge(g *adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(g *adj, int n)
{
    for(int i = 0; i < n; i++)
    {
        ct << i;
        for(auto x : adj[i])
            ct << "-> " << x;
        ct << "\n";
    }
    ct << "\n";
}
// The function updates the array with the distance from source to every 
// vertex
void walkPath(g *adj, int s, int n)
{
    int dist[n] = {0};
    bool vis[n];
    for(int i = 0; i < n; i++)
        vis[i] = false;

    std::queue<int> q;
    q.push(s);
    vis[s] = true;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(auto v : adj[u])
        {
            if(!vis[v])
            {
                vis[v] = true;
                q.push(v);
                dist[v] = dist[u] + 1;
            }
        }
    }
    for(int i = 0; i < n; i++ )
        ct << "0 -> " << i << " = " << dist[i] << "\n";
}

int main()
{
    int n = 6;
    g adj[n];
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 4, 5);
    addEdge(adj, 3, 5);
    printGraph(adj, n);
    ct << "Shortest paths from 0 to every other node is: \n";
    walkPath(adj, 0, n);
    return 0;
}
