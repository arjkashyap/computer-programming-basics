// Implementation of topoligal sorting in DAG
// Implemented using BFS
// This algorithm is also known as Kahns algorithm

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
        for( auto v : adj[i] )
            std::cout << "-> " << v;
        std::cout << "\n";
    }
    std::cout << "\n";
}

// Topological sort using bfs
void topSort(g *adj, int V)
{
    // indegrees of all the vertices
    int indegrees[V] = {0};
    for(int i = 0; i < V; i++){
        for(auto v : adj[i])
            indegrees[v]++;
    }
    std::cout << std::endl;
    std::queue<int> q;
    for(int i = 0; i < V; i++){
        if(indegrees[i] == 0)
            q.push(i);
    }
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        std::cout << u << " ";
        for(auto v : adj[u]){
            indegrees[v]--;
            if(indegrees[v] == 0)
                q.push(v);
        }
    }
    std::cout << std::endl;

}


int main()
{
    int V = 5;
    g adj[V];
//    addEdge(adj, 0, 1);
//    addEdge(adj, 0, 2);
//    addEdge(adj, 2, 3);
//    addEdge(adj, 1, 3);
//    addEdge(adj, 3, 4);
//    addEdge(adj, 3, 5);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    display(adj, V);
    std::cout << "Topological sorted order: \n";
    topSort(adj, V);

    return 0;
}







