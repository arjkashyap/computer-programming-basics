// Detect a cycle in a directed graph

#include<bits/stdc++.h>

typedef std::vector<int> g;

void addEdge(g *adj, int u, int v)
{
    adj[u].push_back(v);
}

void display(g *adj, int V)
{
    for(int i = 0; i < V; i++){
        std::cout << i;
        for(auto v : adj[i])
            std::cout << "-> " << v;
        std::cout << "\n";
    }
}

bool detectCycle(g *adj, bool *recStack, int s)
{
    if(recStack[s])
        return true;
    recStack[s] = true;
    for(auto v : adj[s])
        if(detectCycle(adj, recStack, v))
            return true;
    recStack[s] = false;
    return false;
}

bool isCycle(g *adj, int V)
{
    bool recStack[V];
    for(int i = 0; i < V; i++)
        recStack[i] = false;
    for(int i = 0; i < V; i++){
        if(detectCycle(adj, recStack, i))
            return true;
    }
    return false;
}

int main()
{
    int V = 6;
     g adj[V];
  //  addEdge(adj, 0, 1);
  //  addEdge(adj, 2, 1);
  //  addEdge(adj, 2, 3);
  //  addEdge(adj, 3, 4);
  //  addEdge(adj, 4, 5);
  //  addEdge(adj, 5, 3);

    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);

    display(adj, V);
    if(isCycle(adj, V))
        std::cout << "YES";
    else
        std::cout << "NO";
    std::cout << std::endl;
    return 0;
}
