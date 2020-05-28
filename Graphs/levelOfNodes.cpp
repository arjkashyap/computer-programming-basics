// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Graph 
{

    int V = 0; 
    vector<int> *adj; 

    public: 
        Graph(int V); 
        void addEdge(int u, int v); 
        int levels(int x, int in); 
        void display();
};

Graph::Graph(int V) 
{
    this->V = V; 
    adj = new vector<int>[V+1]; 
}


void Graph::addEdge(int u, int v) 
{
    adj[u].push_back(v); 
    adj[v].push_back(u); 
}


// Function returns the level of the given node
int Graph::levels( int s, int d){
    int levels[this -> V] = {0};
    bool vis[this -> V];
    for(int i = 0; i < this -> V; i++)
        vis[i] = false;
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while(q.empty() == false){
        int u = q.front();
        q.pop();
        for(auto v : adj[u]){
            if(vis[v] == false){
                q.push(v);
                levels[v] = levels[u] + 1;
                vis[v] = true;
            }

        }
    }
    return levels[d];
}


int main() {

    int t;
    cin >> t;

    while(t--){
        int n, e;
        cin >> n >> e;
        Graph g(n);
        int u, v;
        for(int i = 0;i<e;i++){
            cin >> u >> v;
            g.addEdge(u, v);
        }
        int x;
        cin >> x;
        if(x >= n) cout << "-1" << endl;
        else
            cout << g.levels( 0, x) << endl;

    }

    return 0;
}
